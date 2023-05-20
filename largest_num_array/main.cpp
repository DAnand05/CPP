/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[10]; //declaring array size
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
}

