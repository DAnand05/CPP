#include <iostream>

using namespace std;

void bubbleSort(int *input,int n){
    //base case
    if(n==0 || n==1){
        return;
    }

    //small Calculation or processing
    for(int i=0;i<n-1;i++){
        if(input[i]>input[i+1]){
            int temp=input[i];
            input[i]=input[i+1];
            input[i+1]=temp;
        }
    }

    bubbleSort(input,--n);
}

int main(){
    int n;
    cin>>n;

    int *input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    bubbleSort(input,n);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }

    cout<<endl;
    delete[] input;
}
