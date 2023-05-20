/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class QueueArr{
  int *data;
  int nextIndex;
  int firstIndex;
  int size;
  int capacity;
  
  public:
    QueueArr(int s){
        data = new int[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = s;
    }
    
    int getSize(){
        return size;
    }
    
    bool isEmpty(){
        return size == 0;
    }
    
    void enqueue(int element){
        if(size == capacity){
            cout<<"Queue is Full !"<<endl;
            return 0;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex+1)%capacity;
        size++;
        if(firstIndex == -1){
            firstIndex = 0;
        }
    }
    
    int dequeue(){
        if(isEmpty()){
            cout<<"Empty Queue !"<<endl;
            return 0;
        }
        int temp = data[firstIndex];
        firstIndex = (firstIndex+1)%capacity;
        size--;
        if(size == 0){
            firstIndex = -1;
            nextIndex = 0;
        }
        return temp;
    }
    
    int front()const{
        if(isEmpty()){
            cout<<"Empty Queue!!!"<<endl;
            return 0;
        }
        return data[firstIndex];
    }
    
};


int main()
{
    cout<<"Hello World";

    return 0;
}
