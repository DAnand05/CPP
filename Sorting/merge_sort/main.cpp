/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void merge(int part1[],int size1,int part2[],int size2,int output[]){
    int p1i=0,p2i=0,oi=0;
    while(p1i<size1 && p2i<size2){
        if(part1[p1i]<part2[p2i]){
            output[oi]=part1[p1i];
            oi++;
            p1i++;
        }else{
            output[oi]=part2[p2i];
            oi++;
            p2i++;
        }
    }
    while(p1i<size1){
        output[oi]=part1[p1i];
        oi++;
        p1i++;
    }
    while(p2i<size2){
        output[oi]=part2[p2i];
        oi++;
        p2i++;
    }
}

void mergeSort(int input[],int size){
    if(size<=1)return;
    int mid=size/2;
    int part1[500],part2[500];
    int size1=mid,size2=size-mid;
    for(int i=0;i<mid;i++){
        part1[i]=input[i];
    }
    int k=0;
    for(int i=mid;i<size;i++){
        part2[k]=input[i];
        k++;
    }
    mergeSort(part1,size1);
    mergeSort(part2,size2);
    merge(part1,size1,part2,size2,input);
}

int main()
{
    int size;
    cin>>size;
    int* input=new int[size];
    for(int i=0;i<size;i++)cin>>input[i];
    mergeSort(input,size);
    for(int i=0;i<size;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    delete[] input;
}
