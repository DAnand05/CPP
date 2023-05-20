#include<iostream>
#include"BinaryTreeNode.h"
#include<queue>
using namespace std;

BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data : ";
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    cout<<endl;
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int leftData;
        cout<<"Enter Left Child of "<<front->data<<" : ";
        cin>>leftData;
        if(leftData != -1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftData);
            pendingNodes.push(child);
            front->left = child;
        }
        cout<<endl;
        int rightData;
        cout<<"Enter Right Child of "<<front->data<<" : ";
        cin>>rightData;
        if(rightData != -1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightData);
            pendingNodes.push(child);
            front->right = child;
        }
        cout<<endl;
    }
    return root;
}

BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter Data : "<<endl;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftNode = takeInput();
    BinaryTreeNode<int> *rightNode = takeInput();
    root->left = leftNode;
    root->right = rightNode;
    return root;
}

void printLevelWise(BinaryTreeNode<int>* root){
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        if(front->left != NULL){
            pendingNodes.push(front->left);
            cout<<"L:"<<front->left->data;
        }else{
            cout<<"L:-1";
        }
        if(front->right != NULL){
            pendingNodes.push(front->right);
            cout<<",R:"<<front->right->data;
        }else{
            cout<<",R:-1";
        }
        cout<<endl;
    }
}

void print(BinaryTreeNode<int> *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<< " : ";
    if(root->left != NULL){
        cout<<" L "<<root->left->data;
    }
    if(root->right != NULL){
        cout<<" R "<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}

void preOrder(BinaryTreeNode<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(BinaryTreeNode<int>* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(BinaryTreeNode<int>* root){
    if(root == NULL){
       return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int numNodes (BinaryTreeNode<int>* root){
    if(root == NULL){
        return 0;
    }
    return 1+numNodes(root->left)+numNodes(root->right);
}
BinaryTreeNode<int>* minimum(BinaryTreeNode<int>* node){
        if(node == NULL){
            return NULL;
        }
        return min(node,min(minimum(node->left), minimum(node->right)));
    }

//  1 2 3 4 5 6 -1 7 -1 -1 8 -1 9 -1 -1 -1 -1 10 -1 -1 -1

int main(){
    /*
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    root->left = node1;
    root->right = node2;
    */
    BinaryTreeNode<int> *root = takeInputLevelWise();
    printLevelWise(root);
    cout<<endl;
    cout<<"preOrder Traversal : ";
    preOrder(root);
    cout<<endl;
    cout<<"InOrder Traversal : ";
    inOrder(root);
    cout<<endl;
    cout<<"postOrder Traversal : ";
    postOrder(root);
    cout<<endl;
    cout<<"Number of nodes : "<<numNodes(root)<<endl;
    BinaryTreeNode<int>* temp = minimum(root);
    cout<<"Minimum : "<<temp->data<<endl;
    delete root;
}
