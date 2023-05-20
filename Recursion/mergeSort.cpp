#include <iostream>

using namespace std;

void Sort(int* input,int si,int mid, int ei){
    int* output=new int[ei+1];
    int i=si,j=mid+1,k=0;
    while(i<=mid && j<=ei){
        if(input[i]<=input[j]){
            output[k]=input[i];
            i++,k++;
        }else if(input[j]<input[i]){
            output[k]=input[j];
            j++,k++;
        }
    }
    while(i<=mid){
        output[k]=input[i];
        i++,k++;
    }
    while(j<=ei){
        output[k]=input[j];
        j++,k++;
    }
    int l=0;
    for(int m=si;m<=ei;m++){
        input[m]=output[l];
        l++;
    }
    delete[] output;
}

void mergeSort(int* input, int si,int ei){
    if(si>=ei)return;
    int mid=(si+ei)/2;
    mergeSort(input,si,mid);
    mergeSort(input,mid+1,ei);
    Sort(input,si,mid,ei);
}

int main(){
    int n;
    cin>>n;
    int*input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    mergeSort(input,0,n-1);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    delete[] input;
}
