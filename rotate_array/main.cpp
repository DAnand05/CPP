/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void rotate(int *input, int d, int n)
 {
     int s=0,e=n-1;
     //for reversing whole array
     while(s<e){
         int temp=input[s];
         input[s]=input[e];
         input[e]=temp;
         s++;
         e--;
     }
     int e1=(n-d)-1,st=0;
     //for reversing array till d
     while(st<e1){
         int temp=input[st];
         input[st]=input[e1];
         input[e1]=temp;
         st++;
         e1--;
     }
     int s1=n-d,en=n-1;
     //for reversing after d
     while(s1<en){
         int temp=input[s1];
         input[s1]=input[en];
         input[en]=temp;
         s1++;
         en--;
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

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}
