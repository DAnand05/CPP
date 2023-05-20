/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int length(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverseStringWordWise(char input[]) {
    int len=length(input)-1,initial=0;
    while(initial<len){
        int temp=input[initial];
        input[initial]=input[len];
        input[len]=temp;
        initial++;
        len--;
    }
    int index=0,track=0,size=length(input);
    while(index<=size){
        if(input[index]==32||input[index]==0){
            for(int l=index-1;l>=track;l--){
                int temp=input[track];
                input[track]=input[l];
                input[l]=temp;
                track++;
            }
            track=index+1;
        }
        index++;
    }
}

int main()
{
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
