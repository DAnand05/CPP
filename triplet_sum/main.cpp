/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int tripletSum(int *arr,int size,int x){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if((arr[i]+arr[j]+arr[k]==x) && i!=j!=k){
                    count++;
                }
            }
        }
    }
    return count;
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
        int x;
        cin>>x;
        
        cout<< tripletSum(arr,size,x) << endl;
        delete[] arr;
    }
    return 0;
}
