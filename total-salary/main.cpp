/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int sal;
    char g;
    cin>>sal>>g;
    
    int allow;
    double hra	= 0.2*sal;
	double da	= 0.5*sal;
    double pf	= 0.11*sal;
    
    if (g==65) {
        allow	= 1700;
    } else if (g==66) {
        allow	= 1500;
    } else if (g>=67 || g<65) {
        allow	= 1300;
    }
    
    double temp = sal + hra + da + allow - pf;
    int total = round(temp);
    
    cout<<total;
}
