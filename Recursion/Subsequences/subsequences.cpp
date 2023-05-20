#include <iostream>

using namespace std;

int size( int length){
    if(length==0)return 1;
    return 2*size(length-1);
}

int subs(string input,string output[]){
    if(input.size()==0){
    output[0]=" ";
    return 1;
    }
    string smallSize=input.substr(1);
    int smallOutputSize=subs(smallSize,output);
    for(int i=0;i<smallOutputSize;i++){
    output[smallOutputSize+i]=input[0]+output[i];
    }
    return 2*smallOutputSize;
}

int main(){
    string input;
    cin>>input;
    int length=size(input.size());
    string *output=new string[length];
    int resultSize=subs(input,output);
    for(int i=0;i<resultSize;i++){
    cout<<output[i]<<endl;
    }
    delete[] output;
}
