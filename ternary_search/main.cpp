/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int ternarySearch(int arr[],int n,int k){
    int l=0, r=n-1;
    while(r>=l){
        int m1=l+((r-l)/3);
        int m2=r-((r-l)/3);
        if(arr[m1]==k){
            return m1;
        }else if(arr[m2]==k){
            return m2;
        }else if(arr[m1]>k){
            r=m1-1;
        }else if(arr[m2]<k){
            l=m2+1;
        }else{
            l=m1+1;
            r=m2-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<ternarySearch(arr,n,k)<<endl;
}
