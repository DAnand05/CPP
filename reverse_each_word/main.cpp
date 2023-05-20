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
void reverseEachWord(char input[]) {
    int len=length(input),current=0;
    for(int i=0;i<=len;i++){
        if(input[i]==32 || input[i]=='\0'){
            for(int j=i-1;j>=current;j){
                int temp=input[j];
                input[j]=input[current];
                input[current]=temp;
                current++;
                j--;
            }
            current=i+1;
        }
    }
}

int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}
