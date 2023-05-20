/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool checkNumber(int arr[],int n,int x){
    if(n==0){
        return false;
    }
    if(arr[0]==x){
        return true;
    }
    bool isNum=checkNumber(arr+1,n-1,x);
    return isNum;
}

int main()
{
    int n,x;
    cin>>n>>x;
    int * arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << checkNumber(arr,n,x) << endl;
    delete[] arr;
}
