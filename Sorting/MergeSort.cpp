#include<iostream>
using namespace std;

void merge(int si, int ei, int mid, int *arr){
    int *temp=new int[ei+1];
    int i = si,j=mid+1,k=0;
    while(i<=mid && j<=ei){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            k++,i++;
        }else{
            temp[k]=arr[j];
            k++,j++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++,k++;
    }
    while(j<=ei){
        temp[k]=arr[j];
        k++,j++;
    }
    int num=0;
    for(int i = si;i<=ei;i++){
        arr[i]=temp[num];
        num++;
    }
}

void mergeSort(int *arr, int si, int ei){
    if(si>=ei){
        return;
    }

    int mid = (si+ei)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    merge(si,ei,mid,arr);
}

int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter elements of the array: ";
    int *arr= new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}