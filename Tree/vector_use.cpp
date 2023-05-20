#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    for(int i = 0; i<100; i++){
        cout<<"cap  : "<<v.capacity()<<endl;
        cout<<"size : "<<v.size()<<endl;
        v.push_back(i);
    }

    //Forbidden command to insert new elements
    //v[50] = 69; //never use this to insert new element,size doesn't gets updated and might try to access garbage value too
                //but we can use this  to alter the values within existing size;
    //to print the vector we can also use
    v.pop_back();
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<endl;
    }
}
