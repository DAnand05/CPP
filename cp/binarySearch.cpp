#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int num){
    int s = 0, e = n-1;
    while(s<e){
        int mid = (s+e)/2;
        if(arr[mid]==num){
            return mid;
        }
        if(arr[mid]<num){
            s = mid+1;
        }else if(arr[mid]>num){
            e = mid;
        }
    }
    return -1;
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
    cout<<binarySearch(arr,n,num)<<endl;
}
