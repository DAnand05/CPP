#include<vector>

class PriorityQueue{
    vector<int> pq;

public:
    PriorityQueue(){
    }

    bool isEmpty(){
        return pq.size()==0;
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

    int insert(int data){
        pq.push_back(data);
    }

    int remove()
};
