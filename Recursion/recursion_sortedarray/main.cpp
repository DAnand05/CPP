/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

bool checkSorted(int input[],int size){
    if(size<=1)return true;
    
    if(input[0]>input[1]){
        return false;
    }
    bool isSmaller=checkSorted(input+1,--size);
    
    return isSmaller;
}

int main()
{
    int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		
		bool isSorted=checkSorted(input, size);
		if(isSorted){
		    cout<<"true"<<endl;
		}else{
		    cout<<"false"<<endl;
		}
		delete[] input;
}