#include <iostream>

using namespace std;

void sayDigits(int input, string map[]){
    //base case
    if(input==0)return;

    int currNum=input%10;
    int smallNum=input/10;
    //to print in reverse order
    cout<<map[currNum]<<" ";

    //recursive call
    sayDigits(smallNum,map);
    //to print in the order as input
    //cout<<map[currNum]<<" ";

}

int main(){
    int input;
    cin>>input;
    string map[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigits(input,map);
}
