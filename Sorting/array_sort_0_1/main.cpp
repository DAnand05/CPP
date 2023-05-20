/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void sort(int*arr,int size){
    int j=size-1;
    for(int i=0;i<j;i){
        if(arr[i]==1){
            if(arr[j]==0){
                swap(arr[i],arr[j]);
            }else{
                j--;
            }
        }else{
            i++;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        int *arr=new int[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        sort(arr,size);
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        delete[] arr;
    }
    return 0;
}
