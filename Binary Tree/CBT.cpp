#include<iostream>
#include<vector>
#include"BinaryTreeNode.h"

 using namespace std;

 void print(vector<int>* v){
    if(v->size()== 0){
        return;
    }
    for(int i = 0; i < v->size(); i++){
        cout<<v->at(i)<<" : ";
        if((2*i)+1 < v->size()){
            cout<<"L "<<v->at((2*i)+1);
        }
        if((2*i)+2 < v->size()){
            cout<<", R "<<v->at((2*i)+2);
        }
        cout<<endl;
    }
 }


 int main(){
    vector<int>*v= new vector<int>();
    int n;
    cin>>n;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        v->push_back(val);
    }
    print(v);
 }
