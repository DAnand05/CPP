/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int binarySearch(int *input, int n, int val)
{
    int s=0,e=n-1,a=-1;
    while(s<=e){
        int m=(s+e)/2;
        if(input[m]==val){
            return m;
        }else if(input[m]<val){
            s=m+1;
        }else{  /*elseif(input[m]>val) "just for my clarity" */
            e=m-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    
    int *input=new int[n];
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int t;
    cout<<"Enter no. of test cases : "<<endl;
    cin>>t;
    while(t--){
        int val;
        cout<<"Enter the value to be found : "<<endl;
        cin>>val;
        cout<<"The index value is : ";
        cout<<binarySearch(input,n,val)<<endl;
    }
    delete[] input;
    return 0;
}
 