/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void findIndices(int input[],int n, int x, int output[],int& k, int currIndex){
    if(currIndex==n){
        return;
    }
    if(input[currIndex]==x){
        output[k]=currIndex;
        k++;
    }
    findIndices(input,n,x,output,k,++currIndex);
}

int allIndex(int input[],int n, int x,int output[]){
    int k=0;
    findIndices(input,n,x,output,k,0);
    return k;
}

int main()
{
    int n;
    cin>>n;
    int* input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int x;
    cin>>x;
    int* output=new int[n];
    int size=allIndex(input,n,x,output);
    for(int i=0;i<size;i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
    delete[] output;
    delete[] input;
}
