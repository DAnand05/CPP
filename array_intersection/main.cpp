/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;

void intersection(int *arr1,int *arr2,int size1,int size2){
    for(int i=0;i<size1;i++){
        int j=0;
        while(j<size2){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=INT_MIN;
                break;
            }else{
                j++;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int size1;
        cin>>size1;
        int *arr1=new int[size1];
        for(int i=0;i<size1;i++){
            cin>>arr1[i];
        }
        int size2;
        cin>>size2;
        int *arr2=new int[size2];
        for(int i=0;i<size2;i++){
            cin>>arr2[i];
        }
        intersection(arr1,arr2,size1,size2);
        
        delete[] arr1;
        delete[] arr2;
    
        cout<<endl;
    }
    return 0;
}
