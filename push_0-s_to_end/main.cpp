/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void pushZeroesEnd(int *input, int size)
{
    int i=0,temp,k=0;
    
    while(i<=size-1)
    {
        if(input[i]==0){
            i++;
        } else if(input[i]!=0){
            temp=input[k];
			input[k]=input[i];
            input[i]=temp;
            i++;
            k++;
        }
    }
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{

		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
