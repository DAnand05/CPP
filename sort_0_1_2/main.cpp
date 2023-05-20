/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void sort(int *arr, int n)
{
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
      if(arr[i] == 0)
          count0++;
        else if(arr[i] == 1)
            count1++; 
        else
            count2++;
    }
        
    int x=0;
    
    for(int i=0; i<count0; i++){
        arr[x]= 0;
        x++;
    }
     for(int i=0; i<count1; i++){
        arr[x]= 1;
        x++;
    }
     for(int i=0; i<count2; i++){
        arr[x]= 2;
        x++;
     }

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}