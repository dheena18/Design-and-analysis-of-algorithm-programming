#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    cout << "Enter elements of matrix 1:";
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    cout << "Enter elements of matrix 2:";
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++)
        {
			mult[i][j]=0;
            for(k = 0; k < c1; k++)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
    	}
    cout << "Output Matrix: ";
    for(i = 0; i < r1; i++)
    for(j = 0; j < c2; j++)
    {
        cout << mult[i][j]<<"";
    }
    cout << "\n";
    return 0;
}
