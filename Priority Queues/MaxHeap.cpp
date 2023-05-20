#include<iostream>

using namespace std;

bool maxHeap(int* arr, int n){
    for(int i = 0; i<(n-2)/2;i++){
        int lci = (2*i)+1;
        int rci = (2*i)+2;
        if(arr[lci]>arr[i]){
            return false;
        }
        if(arr[rci]>arr[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }

    cout<< (maxHeap(arr,n) ? "true\n" : "false\n");
    delete[] arr;
}
