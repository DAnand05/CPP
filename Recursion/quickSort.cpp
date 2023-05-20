#include <iostream>

using namespace std;

int partition(int *input,int si,int ei){
    int pivot=input[si],count=0;
    for(int i=si+1;i<=ei;i++){
        if(input[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=si+count;
    input[si]=input[pivotIndex];
    input[pivotIndex]=pivot;
    int i=si,j=ei;
    while(i<pivotIndex && j>pivotIndex){
        if(input[i]<=pivot){
            i++;
        }
        else if(input[j]>pivot){
            j--;
        }
        else{
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++,j--;
        }
    }
    return pivotIndex;
}

void quickSort(int* input,int si,int ei){
    if(si>=ei)return;

    int pivot=partition(input,si,ei);
    quickSort(input,si,pivot);
    quickSort(input,pivot+1,ei);
}

int main(){
    int n;
    cin>>n;
    int*input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    quickSort(input,0,n-1);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    delete[] input;
}
