/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int length(char a[]){
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    return count;
}
void removeConsecutiveDuplicates(char input[]) {
    int len=length(input),lastchar=input[0],j=1;
    for(int i=1;i<len;i++){
        if(input[i]!=lastchar){
            input[j]=input[i];
            lastchar=input[j];
            j++;
        }
    }
    input[j]=0;
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
