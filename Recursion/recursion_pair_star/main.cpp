/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

void shift(char input[],int len){
    if(len==0)return;
    input[len+1]=input[len];
    shift(input,len-1);
}

void pairStar(char input[]){
    int len=strlen(input);
    if(strlen(input)==0)return;
    if(input[0]==input[1]){
        shift(input,len);
        input[1]='*';
    }
    pairStar(input+1);
}

int main()
{
    char input[100];
    cin.getline(input,100);
    pairStar(input);
    cout<<input<<endl;
}
