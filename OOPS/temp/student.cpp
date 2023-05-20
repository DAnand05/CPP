#include <iostream>
#include <cstring>
using namespace std;
#include "class.cpp"

int main(){

    char name[]="Funsuk Wangdu";

    student s1(20,name,1501);

    name[7]='B';

    student s2(25,name,1892);

    s1.display();
    s2.display();


    student s3(s1);

    s3.name[0]='P';

    s1.display();
    s3.display();

    cout<<"Total students : "<<student::totalStudents<<endl;        //we print static variable this way, we can print it using cout<<s1.totalStudents<<endl too but, that's not a good practice


    /*//creating objects statically
    student s1;
    s1.age=24, s1.roll=95;

    //creating objects dynamically
    student *s2=new student;
    s2->age=20;
    s2->roll=55;

    cout<<"Student 1"<<endl;
    cout<<"Age  : "<<s1.age<<endl;
    cout<<"Roll : "<<s1.roll<<endl;

    cout<<"Student 2"<<endl;
    cout<<"Age  : "<<s2->age<<endl;
    cout<<"Roll : "<<s2->roll<<endl;

    delete s2;
    */
}
