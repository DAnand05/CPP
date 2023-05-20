#include <iostream>

using namespace std;

int binarySearch(int input[],int si,int ei,int element){
    if(si>=ei)return -1;
    int smallIndex;
    int mid=(si+ei)/2;
    if(input[mid]==element){
        return mid;
    }else if(input[mid]>element){
        smallIndex=binarySearch(input,si,mid-1,element);
    }else if(input[mid]<element){
        smallIndex=binarySearch(input,mid+1,ei,element);
    }
    return smallIndex;
}

int main(){
    int n,element;
    cin>>n>>element;
    int *input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<binarySearch(input,0,n-1,element)<<endl;
    delete[] input;
}
