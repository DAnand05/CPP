/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

template <typename t, typename v>

class Pair{
    t x;
    v y;
    
    public:
    void setX(t x){
        this->x = x;
    }
    
    t getX(){
        return x;
    }
    
    void setY(v y){
        this->y = y;
    }
    
    v getY(){
        return y;
    }
};

int main()
{
    Pair <int, int> p1;
    p1.setX(55);
    p1.setY(59);
    cout<<"This is SPARTAAAAAAAAAAAAAAAAAA "<<p1.getX()<<" "<<p1.getY()<<endl;
    
    Pair <Pair<int,int>, double> p2;
    p2.setX(p1);
    p2.setY(69.69);
    cout<<"This is p2 with triplets : "<<endl;
    cout<<"p2.X.X : "<<p2.getX().getX()<<" "<<" p2.X.Y : "<<p2.getX().getY()<<" "<<"p2.Y : "<<p2.getY()<<endl;
}
