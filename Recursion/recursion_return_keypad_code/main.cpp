/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

string getString(int n){
    string map[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    return map[n];
}

int size(int n){
    if(n==0)return 1;
    int lastIndex=n%10;
    int smallSize=n/10;
    int smallOutputSize=size(smallSize);
    string fetch=getString(lastIndex);
    return fetch.length()*smallOutputSize;
}

int keypad(int n, string output[]){
    if(n<=1){
        output[0]="";
        return 1;
    }
    int lastIndex=n%10;
    int smallSize=n/10;
    int smallOutputSize=keypad(smallSize,output);
    string options=getString(lastIndex);
    for(int i=0;i<options.length()-1;i++){
        for(int j=0;j<smallOutputSize;j++){
            output[j+(i+1)*smallOutputSize]=output[j];
        }
    }
    int k=0;
    for(int i=0;i<options.length();i++){
        for(int j=0;j<smallOutputSize;j++){
            output[k]=output[k]+options[i];
            k++;
        }
    }
    return options.length()*smallOutputSize;
}

int main()
{
    int n;
    cin>>n;
    int outputSize=size(n);
    string* output=new string[outputSize];
    int length=keypad(n,output);
    for(int i=0;i<length;i++){
        cout<<output[i]<<endl;
    }
    delete[] output;
}
