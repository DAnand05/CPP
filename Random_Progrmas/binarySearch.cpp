#include <iostream>

using namespace std;

/*bool binarySearch(int input[],int si, int ei, int element){
    //base case
    if(si>=ei)return false;
    int mid=(si+ei)/2;
    bool smallOutput;
    if(input[mid]==element)return true;
    else if(input[mid]>element){
        return binarySearch(input,si,mid-1,element);
    }else if(input[mid]<element){
        return binarySearch(input,mid+1,ei,element);
    }
}*/

int binarySearch(int input[],int si,int ei,int element){
    //base case
    if(si>=ei)return -1;
    int mid=(si+ei)/2;
    if(input[mid]==element)return mid;
    else if(input[mid]>element){
        return binarySearch(input,si,mid-1,element);
    }else if(input[mid]<element){
        return binarySearch(input,mid+1,ei,element);
    }
}

int main(){
    int size;
    cin>>size;
    int * input=new int[size];
    for(int i=0;i<size;i++){
        cin>>input[i];
    }
    int element;
    cin>>element;
    // to check if element is present or not
    /*
    bool isPresent=binarySearch(input,0,size-1,element);
    if(isPresent)cout<<"True"<<endl;
    else{cout<<"False"<<endl;}
        */

    //to return the index at which element is present
    cout<<binarySearch(input,0,size-1,element);
}
