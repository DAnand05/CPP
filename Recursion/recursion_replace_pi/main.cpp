/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

void shift(char input[],int lastElement){
    if(lastElement==1)return;
    input[lastElement+2]=input[lastElement];
    shift(input,--lastElement);
}

void replacePi(char input[]){
    int lastElement=strlen(input);
    if(strlen(input)<=1)return;
    if(input[0]=='p' && input[1]=='i'){
        shift(input,lastElement);
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    }
    replacePi(input+1);
}

int main()
{
    char input[10000];
    cin.getline(input,10000);
    replacePi(input);
    cout<<input<<endl;
}
