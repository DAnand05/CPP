#include<iostream>

using namespace std;

void selectionSort(int *arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){
    //to run multiple test cases
    int t;
    cout<<"Enter no of test cases to execute"<<endl;
    cin>>t;
    while(t--){
        cout<<"Enter size of array:"<<endl;
        int n;                          //size of array
        cin>>n;
        int *arr=new int[n];            //creating array on heap
        for(int i=0;i<n;i++){ //populating array using data from user
            cout<<"Enter the "<<i<<" element of the array: "<<endl;
            cin>>arr[i];
        }

        selectionSort(arr,n);           //calling function

        cout<<"The array has been sorted"<<endl;

        for(int i = 0; i < n; i++){     //print the sorted array
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
