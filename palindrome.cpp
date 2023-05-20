#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n < 0){
        cout<<"false";
        return false;
    }
    int num = n;
    int rev = 0;
    while(num>0){
        rev = rev*10+(num%10);
        num = num/10;
    }
    if(n == rev){
        cout<<"true";
        return true;
    }else{
        cout<<"false";
        return false;
    }
}
