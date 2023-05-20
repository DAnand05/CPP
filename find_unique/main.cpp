/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int findUnique(int *arr, int size)
{
    int j;
    for(int i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr[i]==arr[j] && j!=i){
                break;
            }
        }
        if(j==size){
            return arr[i];
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

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}
