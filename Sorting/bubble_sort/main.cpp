/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void bubbleSort(int *arr,int n){
    for(int k=n;k>0;k--){
        for(int i=0;i<k-1;i++){ //here k-1 because if size of array is 5 
                                // we just have to sort it till 4.
            int j=i+1;
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bubbleSort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        delete[] arr;
        cout<<endl;
    }
}
