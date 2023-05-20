#include<iostream>
#include<vector>

using namespace std;

class maxCBT{
    vector<int> pq;

public:
    maxCBT(){

    }

    bool isEmpty(){
        return pq.size()==0;
    }

    int getMax(){
        if(isEmpty()){
            return 0;
        }
        return pq.at(0);
    }

    int getSize(){
        return pq.size();
    }

    void print(){
        for(int i = 0; i < pq.size(); i++){
            cout<<pq.at(i)<<" ";
        }
        cout<<endl;
    }

    void insert(int element){
        pq.push_back(element);

        int currIndex = pq.size()-1;

        while(currIndex>0){
            int parentIndex = (currIndex-1)/2;
            if(pq[currIndex]>pq[parentIndex]){
                int temp = pq[currIndex];
                pq[currIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }else{
                break;
            }
            currIndex = parentIndex;
        }

    }

    int removeMax(){
        int ans = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();

        int parentIndex = 0;
        int lci = (parentIndex*2)+1;
        int rci = (parentIndex*2)+2;

        while(lci<pq.size()){
            int index = parentIndex;

            if(pq[index] < pq[lci]){
                index = lci;
            }
            if(rci<pq.size() && pq[index] < pq[rci]){
                index = rci;
            }
            if(index == parentIndex){
                break;
            }

            int temp = pq[index];
            pq[index] = pq[parentIndex];
            pq[parentIndex] = temp;

            parentIndex = index;
            lci = (parentIndex*2)+1;
            rci = (parentIndex*2)+2;
        }
        return ans;
    }
};
