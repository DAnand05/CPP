#include <iostream>

using namespace std;

bool checkAB(char input[],int index){
    if(input[index]=='\0')return true;
    if(input[index]!='a')return false;
    else if(input[1]!='\0' && input[2]!='\0'){
        if(input[1]=='b' && input[2]=='b'){
            return checkAB(input,index+3);
        }
    }
    return checkAB(input,++index);
}

int main(){
    char input[100];
    cin>>input;
    bool check=checkAB(input,0);
    if(check){
        cout<<"True"<<endl;
    }else{
    cout<<"False"<<endl;
    }
}
