#include<iostream>

using namespace std;

template<typename T>
class Node{

public:
    T data;
    Node<T> *next;

    Node(T data){
        this->data = data;
        next = NULL ;
    }
};

template <typename T>
class StackLL{
    Node<T> *head;
    int size;

public:
    StackLL(){
        head = NULL;
        size = 0;
    }

    bool isEmpty(){
        return head == NULL;
    }

    int getSize(){
        return size;
    }

    void push(T element){
        Node<T> *newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
    }

    T pop(){
        if(head == NULL){
            cout<<"Empty Stack"<<endl;
            return -1;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
    T top(){
        if(head == NULL){
            cout<<"Empty stack"<<endl;
            return -1;
        }
        return head->data;
    }
};
