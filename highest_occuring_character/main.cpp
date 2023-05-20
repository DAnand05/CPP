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
char highestOccurringChar(char input[]) {
    int len=length(input);
    int freq[256]={0},max=0;
    char res=input[0];
    for(int i=0;i<len;i++){
        int current=input[i];
        freq[current]+=1;
        }
    for(int i=0;i<len;i++){
        int current=input[i];
        if(freq[current]>max){
            max=freq[current];
            res=current;
        }
    }
    return res;
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}
