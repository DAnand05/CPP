/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int subs(string input,string output[]){
    if(input.empty()){
        output[0]=" ";
        return 1;
    }
    string smallString=input.substr(1);
    int smallOutputSize=subs(smallString,output);
    for(int i=0;i<smallOutputSize;i++){
        output[i+smallOutputSize]=input[0]+output[i];
    }
    return 2*smallOutputSize;
}

int main()
{
    string input;
    cin>>input;
    string *output=new string[100];
    int size=subs(input,output);
    for(int i=0;i<size;i++){
        cout<<output[i]<<endl;
    }
    delete[] output;
}
