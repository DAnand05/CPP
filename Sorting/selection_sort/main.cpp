/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void selSort(int arr[],int n){
    for(int i=0;i < n;i++){
        int min = arr[i], minIndex = i;
        for(int j=i+1;j < n;j++){
            if(arr[j] < min){
                min=arr[j];
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}

int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    int arr[n];
    while(t--){
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        selSort(arr,n);
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
