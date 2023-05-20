#include <iostream>
using namespace std;

#include "node.cpp"

void insertElement(node* head, int i, int element){

    node* temp=head;
    int count=0;
    if(i==0){
        node* newNode=new Node(element);
        newNode->next=temp;
        temp=newNode;
    }else{
    while( temp != NULL && count != i-1 ){

    }

    }
}

void printLength(node* head){
    int count=0;
    node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
        count++;
    }
    cout<<"Length of the Linked List is "<<count<<endl;
}

void printElement(node* head, int i){
    int count=0;
    node* temp = head;
    while(temp != NULL){
        if(count==i){
            cout<<"The element at ith index is : "<<temp->data<<endl;
            return;
        }
        temp=temp->next;
        count++;
    }
}

node* takeInput(){                      //to accept input from user
    int data;
    cin>>data;
    node *head=NULL;                    //initializing head with null, so if the list remains empty, we can return null;
    /*while(data != -1){                  //O(n^2)
        node* newNode=new node(data);   //initializing newNode dynamically, so that it doesn't get deallocated when scope ends;
        if(head==NULL){                 //if and only if, the value in head is NULL, it will get updated to newNode
            head=newNode;
        }else{
            node *temp=head;            //creating another pointer, so that we don't forget the address of head node in the process
            while(temp->next!=NULL){    //running loop till the value in temp->next comes to be null.
                temp=temp->next;
            }
            temp->next=newNode;         //updating the current node's "next" with newNode.
        }
        cin>>data;                      //taking input from user in data.
    }*/
    node *tail=NULL;
    while(data != -1){

        node* newNode=new node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;

    }
    return head;                        //returning head node address.
}

void print(node *head){
    node *temp=head;

    while(temp!=NULL){                  //iterating till temp doesn't gets updated with NULL, so that even the last block gets displayed in output;
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    node *head=takeInput();             //calling takingInput function;

    print(head);                        //calling print function;

    printLength(head);

    printElement(head,2);
    /*
    //static creation of nodes
    node n1(1);

    node *head=&n1; //DON'T FORGET to store the address of head node, like everr, else the list might get lost;

    node n2(2);     // The first node in linked list is known as head, and the last node as tail

    n1.next=&n2;    //stored the address of next node in the previous one

    node *n3=new node(10);
    node *n4=new node(20);
    node *n5=new node(50);
    n2.next=n3;
    n3->next=n4;
    n4->next=n5;


    print(head);

    //Dynamic creation of nodes

    */

}
