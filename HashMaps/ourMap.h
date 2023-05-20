#include<string>

using namespace std;

template<typename V>
class MapNode{      //friend class
public:
    string key;
    V value;
    MapNode* next;

    MapNode(string key, V value){
        this->key = key;
        this->value = value;
        next = NULL;
    }

    ~MapNode(){
        delete next;    //recursive deletion
    }
};

template<typename V>
class ourMap{
    MapNode<V>** buckets;
    int count;          //current size
    int numBuckets;     //max size

public:
    ourMap(){
        count = 0;
        numBuckets = 5;
        buckets = new MapNode<V>*[numBuckets];
        for(int i = 0; i < numBuckets; i++){
            buckets[i] = NULL;
        }
    }

    ~ourMap(){
        for(int i = 0; i < numBuckets; i++){
            delete buckets[i];
        }
        delete[] buckets;
    }

    int size(){
        return count;
    }

    V getValue(string Key){
        int bucketIndex = getIndex(Key);
        MapNode<V>* head = buckets[bucketIndex];
        while(head != NULL){
            if(head->key == Key){
                return head->value;
            }
            head = head->next;
        }
        return 0;
    }
private:
    int getIndex(string key){                       //HASHING
        int hashCode = 0;

        int currCoeff = 1;
        for(int i = key.length()-1; i >= 0; i--){
            hashCode+=key[i]*currCoeff;
            hashCode%=numBuckets;
            currCoeff*=43;
            currCoeff%= numBuckets;
        }
        return hashCode%numBuckets;
    }

    void rehash(){                                  //REHASHING
        MapNode<V>** temp = buckets;
        buckets = new MapNode<V>*[numBuckets*2];
        for(int i = 0; i < 2*numBuckets; i++){
            buckets[i] = NULL;
        }
        int oldBucketCount = numBuckets;
        numBuckets *= 2;
        count = 0;
        for(int i = 0; i < oldBucketCount; i++){
            MapNode<V>* head = temp[i];
            while(head!=NULL){
                string key = head->key;
                V value = head->value;
                insert(key, value);
                head = head->next;
            }
        }

        for(int i = 0; i < oldBucketCount; i++){
            MapNode<V>* head = temp[i];
            delete head;
        }
        delete[] temp;
    }

public:
    double loadFactor(){
        return (1.0*count)/numBuckets;
    }

    void insert(string Key, V value){
        int bucketIndex = getIndex(Key);
        MapNode<V>* head = buckets[bucketIndex];
        while(head!=NULL){
            if(head->key == Key){
                head->value = value;
                return;
            }
            head = head->next;
        }
        head = buckets[bucketIndex];
        MapNode<V>* node = new MapNode<V>(Key, value);
        node->next = head;
        buckets[bucketIndex] = node;
        count++;
        double loadFactor = (1.0*count)/numBuckets;
        if(loadFactor>0.7){
            rehash();
        }
    }

    V remove(string Key){
        int bucketIndex = getIndex(Key);
        MapNode<V>* head = buckets[bucketIndex];
        MapNode<V>* prev = NULL;
        while(head != NULL){
            if(head->key == Key){
                if(prev == NULL){
                    buckets[bucketIndex] = head->next;
                }else{
                    prev->next = head->next;
                }
                V value = head->value;
                head->next = NULL;
                delete head;
                count--;
                return value;
            }
            prev = head;
            head = head->next;
        }
        return 0;
    }


};
