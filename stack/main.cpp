/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class arrayStack{
    
    private:
    int *arr;
    int nextIndex;
    int capacity;
    
    public:
    
    arrayStack(){
        arr = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    
    bool isEmpty(){
        /*
        if(nextIndex == 0){
            return true;
        }
        return false;
        */
        return nextIndex == 0;
    }
    
    void push(int data){
        if(nextIndex == capacity){
            int *newData = new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newData[i] = arr[i];
            }
            capacity *= 2;
            delete[] arr;
            arr = newData;
        }
        arr[nextIndex] = data;
        nextIndex++;
    }
    void pop(){
        if(nextIndex == 0){
            cout<<"Empty stack"<<endl;
            return;
        }
        nextIndex--;
        cout<<arr[nextIndex]<<endl;
    }
    void top(){
        if(nextIndex == 0){
            cout<<"Empty stack"<<endl;
            return;
        }
        cout<<arr[nextIndex-1]<<endl;
    }
    void size(){
        cout<<nextIndex<<endl;
    }
    
};

int main()
{
    arrayStack a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    a.push(60);
    
    a.top();
    a.pop();
    a.pop();
    a.pop();
    a.top();
    a.size();
    bool empty = a.isEmpty();
    if(empty){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}
