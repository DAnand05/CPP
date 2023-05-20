/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[100];
    int i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    for(int i=0;i<100;i++){
        cout<<arr[i]<<endl;
    }
}
