/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int partition(int input[],int si,int ei){
    int pivot=input[si];
    //to place the element for partitioning
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(pivot>=input[i])count++;
    }
    //swapping the element with pivotIndex
    int pivotIndex=si+count;
    int temp = input[si];
    input[si]=input[pivotIndex];
    input[pivotIndex]=temp;
    //sorting the array
    int i=si, j=ei;
    while(i<pivotIndex && j>pivotIndex){
        if(input[i]<=pivot){
            i++;
        }else if(input[j]>pivot){
            j--;
        }else{
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
        }
    }
    return pivotIndex;
}

void quickSort(int input[],int si,int ei){
    if(si>=ei)return;
    int pivot=partition(input,si,ei);
    quickSort(input,si,pivot-1);
    quickSort(input,pivot+1,ei);
}

int main()
{
    int n;
    cin>>n;
    int* input=new int[n];
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