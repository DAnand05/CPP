#include<iostream>
#include<vector>
using namespace std;

class priorityQueue{
    vector<int> pq;
    /*
    int *data;
    int size;
    int capacity;
    */

    public:
    priorityQueue(){
        /*
        data = new int[5];
        size = 0;
        capacity = 5;
        for(int i = 0; i< capacity;i++){        //for setting all values to 0;
            data[i] = 0;
        }
        */
    }

    bool isEmpty(){
        return pq.size()==0;
        //return size==0;
    }

    void insert(int element){
        pq.push_back(element);
        int currIndex = pq.size()-1;
        while(currIndex>0){
            int parentIndex = (currIndex-1)/2;
            if(pq[currIndex]<pq[parentIndex]){
                int temp = pq[currIndex];
                pq[currIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }else{
                break;
            }
            currIndex = parentIndex;
        }
        /*
        if(size == capacity){
            int* temp = new int[capacity*2];
            for(int i = 0; i<capacity*2;i++){
                if(i<capacity){
                    temp[i] = data[i];
                }else{
                    temp[i]=0;
                }
            }
            delete[] data;
            data = temp;
            capacity*=2;
            insert(element);
            return;
        }
        data[size] = element;
        int currIndex = size;
        while(currIndex>0){
            int parentIndex = (currIndex-1)/2;
            if(data[currIndex]<data[parentIndex]){
                int temp = data[currIndex];
                data[currIndex] = data[parentIndex];
                data[parentIndex] = temp;
            }else{
                break;
            }
            currIndex = parentIndex;
        }
        size++;
        */
    }

    int getSize(){
        return pq.size();
    }

    int getMin(){
        if(isEmpty()){
            return 0;
        }
        return pq[0];
    }

    int removeMin(){
        if(isEmpty()){
            return 0;
        }
        //changing both value to remove min
        int ans = pq.at(0);
        pq[0] = pq[pq.size()-1];
        pq.pop_back();

        int parentIndex = 0;
        int lci = (parentIndex*2)+1;
        int rci = (parentIndex*2)+2;
        while(lci < pq.size()){
            int index = parentIndex;
            //in the first "if" we are checking if element at parentIndex is smaller than element at lci
            if(pq[index]>pq[lci]){
                    index = lci;
            }
            //in the following condition we are checking if element at rci is smaller than the element at parentIndex or if element is smaller than the element at lci
            if(rci<pq.size() && pq[rci]<pq[index]){
                    index = rci;
            }
            //if the the value of index and parentIndex is equal even after the above conditions, then we should exit the loop because we've reached the right position
            if(index == parentIndex){
                break;
            }

            int temp = pq[parentIndex];
            pq[parentIndex] = pq[index];
            pq[index] = temp;

            parentIndex = index;
            lci = (parentIndex*2)+1;
            rci = (parentIndex*2)+2;
        }
        return ans;
        /*
        data[0] = data[size-1];
        data[size-1] = 0;
        size--;

        int currIndex = 0;
        while(currIndex < size){
            int childIndex = currIndex*2;
            int index = childIndex;
            if(data[currIndex]>data[childIndex+1]){
                index = childIndex+1;
            }else if(data[currIndex]>data[childIndex+2]){
                index = childIndex+2;
            }else{
                break;
            }

            int temp = data[currIndex];
            data[currIndex] = data[index];
            data[index] = temp;

            currIndex = index;
        }
        return;
        */
    }

    void print() const{
        for(int i = 0; i<pq.size();i++){
            cout<<pq.at(i)<<" ";
        }
        cout<<endl;
    }

};
