/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int duplicateNum(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j] && j!=i){
                return(arr[i]);
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--);{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<duplicateNum(arr,n)<<endl;
    }
    return 0;    
}
