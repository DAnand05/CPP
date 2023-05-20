/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int length(char a[]){
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    return count;
}
bool isPermutation(char input1[], char input2[]) {
    int len1=length(input1);
    int len2=length(input2);
    if(len1==len2){
        int freq[256]={0};
        for(int i=0;i<len1;i++){
            int current=input1[i];
            freq[current]+=1;
        }
        for(int j=0;j<len2;j++){
            int current=input2[j];
            freq[current]-=1;
        }
        for(int i=0;i<len1;i++){
            int current=input1[i];
            if(freq[current]!=0){
                return false;
            }
        }
        return true;
    }else{
        return false;
    }
}

int main()
{
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
