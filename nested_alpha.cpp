#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter row : ";
    cin >> row;
    cout << "Enter col : ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << j + (5 * (i - 1)) << " ";
        }
        cout << endl;
    }
}