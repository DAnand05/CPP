/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

void shift(char input[]){
    if(input[0]=='\0')return;
    input[0]=input[1];
    shift(input+1);
}

void removeConsecutiveDuplicates(char input[]){
    if(strlen(input)==1)return;
    if(input[0]!=input[1])removeConsecutiveDuplicates(input+1);
    else{
        shift(input);
        removeConsecutiveDuplicates(input);
    }
}

int main()
{
    char input[100];
    cin>>input;
    removeConsecutiveDuplicates(input);
    cout<<input<<endl;
}
