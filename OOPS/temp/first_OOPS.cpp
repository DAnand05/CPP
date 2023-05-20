#include <iostream>

using namespace std;

class product{
    //all properties are private(by default)
public:

    int price;
private:

    int weight;

public:

    //Destructor deallocates the memory of an object
    ~product(){
        cout<<"Destructor called!"<<endl;
    }

    //constructors are important, as they prevent the data members to get initialized with default or garbage values

    //default constructor(constructor with no arguments)
    product(){
        cout<<"Default constructor called(explicitly created)!"<<endl;
    }

    //parameterized constructor(constructor with arguments)
    product(int weight){
        cout<<"Parameterized Constructor called!"<<endl;
        this->weight=weight;    //this keyword stores the address of the current object, just like a pointer
    }

    product(int p, int w){
        cout<<"Constructor 3 called"<<endl;
        price=p;
        weight=w;
    }

    void display(){
    cout<<price<<" "<<weight<<endl;
    }

    int getWeight(){
        return weight;
    }

    int setWeight(int a){
        if(a<=0){           //since weight was set to be private, we can have control over what to accept as input for weight
                            //It's necessary to set the important properties to be private so that we can have control over the input for that property or properties
            return 0;
        }
        weight=a;
        return weight;
    }
};

int main(){
    product p1;
        //the above statement gets interpreted as "   p1.product();   ", where p1 is a default constructor(i.e. it has has no input arguments);
    p1.display();
    cout<<endl;
    product p2(5000);

    p2.display();
    cout<<endl;

    product *p3=new product(1000,2);
    p3->display(); //or (*p3).display();
    cout<<endl;

    //copy constructor till line 86

    product p4(*p3);

    p4.display();
    cout<<endl;

    product p5(p2);

    p5.display();
    cout<<endl;

    product *p6=new product(*p3);
    p6->display(); //or (*p3).display();
    cout<<endl;


    delete p6;
    delete p3;              //to deallocate memory of a dynamically created object, we need to use delete, without delete it would be impossible for the destructor to de-allocate memory of the object


    /*p1.price=100;
    p1.setWeight(59);

    product *p2=new product;
    p2->price=299;
    p2->setWeight(56);

    p1.display();
    (*p2).display();


    /*
    cout<<"Product 1"<<endl;
    cout<<endl;
    cout<<"Price(in Rs.)        : "<<p1.price<<endl;
    cout<<"Weight(in grams)     : "<<p1.weight<<endl;
    cout<<endl;
    cout<<"Product 2"<<endl;
    cout<<endl;
    cout<<"Price(in Rs.)        : "<<p2->price<<endl;
    cout<<"Weight(in grams)     : "<<p2->weight<<endl;
    cout<<endl;
    */
}
