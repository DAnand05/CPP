#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(15);
    pq.push(55);
    pq.push(59);
    pq.push(73);
    pq.push(48);
    pq.push(19);

    if(pq.empty()){
        cout<<"Empty"<<endl;
    }else{
        cout<<"Not empty"<<endl;
    }

    cout<<pq.size()<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}
