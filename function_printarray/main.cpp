/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    
    int input[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<"Resulting array is:"<<endl;
    printArr(input,n);
}
