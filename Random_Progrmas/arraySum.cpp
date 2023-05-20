#include <iostream>

using namespace std;

int arrSum(int input[],int size){
    //base case
    if(size==0)return 0;

    //recursive call
    int smallSize=arrSum(input+1,--size);

    //calculation or processing
    return input[0]+smallSize;



}

int main(){
    int size;
    cin>>size;
    int *input=new int[size];
    for(int i=0;i<size;i++){
        cin>>input[i];
    }
    cout<<arrSum(input,size)<<endl;
}
