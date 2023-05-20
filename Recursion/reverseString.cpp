#include <iostream>

using namespace std;

void reverseString(string& input,int si,int ei){
    cout<<"call recieved for "<<input<<endl;
    //base case
    if(si>ei)return;

    int temp=input[si];
    input[si]=input[ei];
    input[ei]=temp;
    si++,ei--;
    //recursive call
    reverseString(input,si,ei);
}

int main(){
    string input="abcde";
    cout<<endl;

    reverseString(input,0,input.length()-1);
    cout<<endl;
    cout<<input<<endl;
}
