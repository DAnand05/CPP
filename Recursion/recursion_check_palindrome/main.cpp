/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

bool check(char input[],int s,int e){
    if(s>=e)return true;
    if(input[s]!=input[e])return false;
    check(input,s+1,e-1);
}

bool checkPalindrome(char input[]){
    return check(input,0,strlen(input)-1);
}

int main()
{
    char input[50];
    cin>>input;
    if(checkPalindrome(input))cout<<"True"<<endl;
    else{ 
        cout<<"False"<<endl;
    }
}

