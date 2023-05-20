/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void arrange(int *arr,int n){
    int s=0,e=n-1;
    int count=1;
    while(s<=e){
        if(count%2!=0){
            arr[s]=count;
            count++;
            s++;
        }else{
            arr[e]=count;
            count++;
            e--;
        }
    }
}

int main()
{
    int t;
    cout<<"enter no. of test cases:"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"No. of elements:"<<endl;
        cin>>n;
        int *arr=new int[n];
        arrange(arr,n);
        cout<<"Resulting array in the order is: "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        delete [] arr;
    }
}
