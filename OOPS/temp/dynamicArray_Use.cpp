#include <iostream>

using namespace std;

#include "dynamicArray.cpp"

int main(){
    dynamicArray d1;

    d1.add(5);
    d1.add(10);
    d1.add(15);
    d1.add(20);
    d1.add(25);
    d1.add(30);
    d1.add(35);
    d1.add(40);
    d1.add(45);
    d1.add(50);
    d1.add(55);

    dynamicArray d2(d1);
    d1.addElement(1,60);
    dynamicArray d3;
    d3 = d1;

    d1.print();
    d2.print();
    d3.print();
}
