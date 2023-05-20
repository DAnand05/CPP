#include <iostream>
using namespace std;

#include "fraction.cpp"

int main(){
    fraction f1(10,2);
    fraction f2(15,4);

    fraction f3=f1++;
    f1.print();
    f3.print();

    (f1+=f2)+=f2;
    f1.print();
    f2.print();
    /*
    /*          commented to check operator overloading
    f1.add(f2);

    f1.print();
    f2.print();

    f1.multiply(f2);
    //

    const fraction f3;  //constant object created, initialized with default constructor

    cout<<f3.getNumerator()<<" "<<f3.getDenominator()<<endl;    //if these two functions weren't declared as const, it would have given an error

    //operator overloading check
    fraction f4=f1+f2;
    fraction f5=f4*f2;
    if(f1==f5){
        cout<<"Equal"<<endl;
    }else{
        cout<<"Not Equal"<<endl;
    }
    f1.print();
    f2.print();
    f4.print();
    f5.print();
    fraction f6=++(++f5);
    cout<<endl;
    f5.print();
    f6.print();
    */
}
