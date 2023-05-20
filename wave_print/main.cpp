/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void wavePrint(int **input, int n, int m)
{
    //n is for rows and m is for columns
    int val=0;
    for(int i=0;i<m;i++){
        if(val==0){
            for(int j=val;j<n;j++){
                cout<<input[j][i]<<" ";
                val++;
            }
            val-=1;
            continue;
        }else{
            for(int j=val;j>=0;j--){
                cout<<input[j][i]<<" ";
                val--;
            }
            val++;
            continue;
        }
    }
}

int main()
{
    int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;
		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}
