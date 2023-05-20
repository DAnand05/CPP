#include <iostream>
#include <queue>
using namespace std;
#include "TreeNode.h"

treeNode<int> *takeInput(){
    int rootData;
    cout<<"Enter root data : "<<endl;
    cin>>rootData;
    treeNode<int> *root = new treeNode<int>(rootData);

    queue<treeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0){
        treeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout<<"Enter number of child Nodes of "<<front->data<<" : "<<endl;
        cin>>numChild;
        for(int i = 0; i < numChild; i++){
            int childData;
            cout<<"Enter "<<i<<"th children of "<<front->data<<" : "<<endl;
            cin>>childData;
            treeNode<int> *children = new treeNode<int> (childData);
            front->child.push_back(children);
            pendingNodes.push(children);
        }
    }
    return root;
}
/*
 treeNode<int>* takeInput(){
    int rootData;
    cout<< "Enter data "<<endl;
    cin>>rootData;
    treeNode<int> *root = new treeNode<int>(rootData);

    int n;
    cout<<"Enter number of elements in "<<rootData<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        treeNode<int> *child = takeInput();
        root->child.push_back(child);
    }
    return root;
 }
*/
/*
void print(treeNode<int> root){

    queue<treeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size != 0){
        treeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<" : ";
        for(int i = 0; i < front->child.size(); i++){
            cout<<front->child[i]<<", ";
            pendingNodes.push(front->child[i]);
        }
    }

}
*/

void printAllAtLevelK(treeNode<int>* root, int k){
    if(root == NULL){
        return;
    }
    if(k == 0){
        cout<<root->data<<endl;
        return;
    }
    for(int i = 0; i< root->child.size();i++){
        printAllAtLevelK(root->child[i],k - 1);
    }
}

 void print(treeNode<int> *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<< " : ";
    for(int i = 0; i < root->child.size();i++){
        cout<<root->child[i]->data<< ", ";
    }
    cout<<endl;
    for(int i = 0;i<root->child.size();i++){
        print(root->child[i]);
    }
 }

 void preorder(treeNode<int> *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    for(int i = 0; i < root->child.size();i++){
        preorder(root->child[i]);
    }
 }

 void postOrder(treeNode<int> *root){
    if(root == NULL){
        return;
    }
    for(int i = 0;i<root->child.size();i++){
        postOrder(root->child[i]);
    }
    cout<<root->data<<" ";
 }

 void deleteTree(treeNode<int> *root){      //using function recursively to delete a tree
    if(root == NULL){
        return;
    }
    for(int i = 0; i < root->child.size();i++){
        deleteTree(root->child[i]);
    }
    delete root;
 }

 //input:  1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
 int main(){
    /*
    treeNode<int> *root = new treeNode<int>(10);
    treeNode<int> *node1 = new treeNode<int>(20);
    treeNode<int> *node2 = new treeNode<int>(30);
    root->child.push_back(node1);
    root->child.push_back(node2);
    */
    treeNode<int> *root = takeInput();
    print(root);
    printAllAtLevelK(root,2);
    cout<<"PreOrder : ";
    preorder(root);
    cout<<endl;
    cout<<"PostOrder : ";
    postOrder(root);
    cout<<endl;
    //deleteTree(root);                   //calling a function to delete a tree
    delete root;                          //calling on a destructor to delete a tree
    cout<<"Tree Deleted."<<endl;
    }
