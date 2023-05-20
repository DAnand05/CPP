/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int len(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}
void printSubstrings(char input[]) {
    int n=len(input);
    for(int k=0;k<n;k++){
       for(int i=k;i<n;i++){
        for(int j=k;j<=i;j++){
            cout<<input[j];
        }
        cout<<endl;
        }
    }
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
