/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;

int secondlargest(int arr[], int n){
    int l=INT_MIN,s=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            s=l;
            l=arr[i];
        }else if(arr[i]<l && arr[i]>s){
            s=arr[i];
        }
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<secondlargest(arr,n)<<endl;
}
