/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
    int j=0;
    for(int i=0;input[i]!='\0';i++){
        if(input[i]!=c){
            input[j]=input[i];
            j++;
        }
    }
    input[j]='\0';
}

int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}
