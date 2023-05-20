/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
        int m = nRows, n = nCols;
        int i,k=0,l=0;
        while(k<m && l<n){
            for(i=l;i<n;i++) cout << input[k][i] << " ";
            k++;
            for(i=k;i<m;i++) cout << input[i][n-1]<< " ";
            n--;
            if (k < m){
                for(i=n-1;i>=k-1;i--) cout << input[m-1][i]<< " ";
            }
            m--;
            if (l < n) {
                for(i=m-1;i>l;i--) cout << input[i][l]<< " ";

            }
            l++;
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
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
