#include<iostream>
using namespace std;

int linearSearch(int *arr, int n, int num){
    for(int i = 0; i < n; i++){
        if(arr[i]==num){
            return i;
        }
    }
    return 0;
}

int main(){
    int n, num;
    cin>>n;
    int *arr=new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"enter number to find: ";
    cin>>num;
    cout<<endl;
    cout<<linearSearch(arr,n,num)<<endl;
}
