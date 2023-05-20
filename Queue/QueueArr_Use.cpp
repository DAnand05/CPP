#include <iostream>

using namespace std;

#include "QueueArr.h"

int main(){
    QueueArr<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);

    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    cout<<"Size before enqueuing new element : "<<q.getSize()<<endl;

    q.enqueue(80);

    cout<<"Size after enqueuing : "<<q.getSize()<<endl;

    cout<<q.isEmpty()<<endl;

}
