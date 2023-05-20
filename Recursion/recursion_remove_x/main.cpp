/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

void shift(char input[]){
    if(strlen(input)<1)return;
    input[0]=input[1];
    shift(input+1);
}
void removeX(char input[]) {
    if(strlen(input)==0)return;
    removeX(input+1);
    if(input[0]=='x'){
        shift(input);
    }
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
