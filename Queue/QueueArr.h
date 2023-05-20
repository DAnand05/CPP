#include<iostream>
using namespace std;

template<typename T>
class QueueArr{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    QueueArr(){
        data = new T[5];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = 5;
    }

    int getSize() const{
        return size;
    }

    bool isEmpty()const{
        return size == 0;
    }

    void enqueue(T element){
        if(size == capacity){
            T *newData = new T[2*capacity];
            int j = 0;
            for(int i = firstIndex;i<size;i++){
                newData[j] = data[i];
                j++;
            }
            for(int i = 0;i<firstIndex;i++){
                newData[j] = data[i];
                j++;
            }
            delete[] data;
            data = newData;
            firstIndex = 0;
            nextIndex = capacity;
            capacity *= 2;

        }
        data[nextIndex] = element;
        nextIndex = (nextIndex+1)%capacity;
        size++;
        if(firstIndex == -1){
            firstIndex = 0;
        }
    }

    T dequeue(){
        if(isEmpty()){
            cout<<"Empty Queue !!!"<<endl;
            return 0;
        }
        T res = data[firstIndex];
        firstIndex = (firstIndex+1)%capacity;
        size--;
        return res;
    }

    T front(){
        if(isEmpty()){
            cout<<"Empty Queue!!!"<<endl;
            return 0;
        }
        return data[firstIndex];
    }
};
