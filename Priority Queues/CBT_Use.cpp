#include<iostream>
#include"CBT.h"

using namespace std;

int main(){
    priorityQueue q;
    q.insert(12);
    q.print();
    q.insert(6);
    q.insert(5);
    q.insert(100);
    q.insert(1);
    q.insert(9);
    q.insert(0);
    q.insert(14);
    q.print();
    cout<<q.removeMin()<<endl;
    q.print();
    cout<<q.removeMin()<<endl;
    q.print();
}
