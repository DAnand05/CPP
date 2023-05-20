/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int lastIndex(int arr[],int n,int x){
    if(n==0){
        return -1;
    }
    if(arr[n-1]==x){
        return n-1;
    }
    int smallOutput=lastIndex(arr,n-1,x);
    if(smallOutput!=-1){
        return smallOutput;
    }else{
        return -1;
    }
}

int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<lastIndex(arr,n,x)<<endl;
    delete[] arr;
}