#include<iostream>
#include"Max_CBT.h"

using namespace std;

//1 10 1 9 1 8 1 7 1 6 1 5 1 4 1 11 5 2 3 4 5 4 5 -1

int main(){
    int choice;
    cin>>choice;
    maxCBT v;
    while(choice!=-1){
        switch(choice){
            case 1: int element;
                    cin>>element;
                    v.insert(element);
                    break;

            case 2: cout<<v.getMax()<<endl;
                    break;

            case 3: cout<<v.getSize()<<endl;
                    break;

            case 4: cout<<v.removeMax()<<endl;
                    break;

            case 5: v.print();
                    break;

            default: return 0;
        }
        cin>>choice;
    }
}
