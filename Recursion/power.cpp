#include <iostream>

using namespace std;

int power(int num1,int num2){
    if(num2==0){
        return 1;
    }
    if(num2==1){
        return num1;
    }
    int bigOutput=power(num1,num2/2);
    if(num2%2==0){
        return bigOutput*bigOutput;
    }else{
        return num1*(bigOutput*bigOutput);
    }
}

int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<power(num1,num2)<<endl;
}
