#include <iostream>

using namespace std;

#include "complexNumbers.cpp"

int main(){

    int real1,imaginary1,real2,imaginary2;
    cin>>real1>>imaginary1;
    complexNumbers c1(real1,imaginary1);

    cin>>real2>>imaginary2;
    complexNumbers c2(real2,imaginary2);

    int choice;
    cout<<"1. ADD "<<endl;
    cout<<"2. MULTIPLY "<<endl;

    cin>>choice;

    int option=choice;

    if(option==1){
        c1.plus(c2);
    }else if(option==2){
        c1.multiply(c2);
    }

    c1.print();
}
