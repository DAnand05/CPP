/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool checkPalindrome(char str[]) {
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    int i=0;
    count=count-1;
    while(i<=count){
        if(str[i]!=str[count]){
            return false;
        }else{
            i++;
            count--;
        }
    }
    return true;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
