#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter num of rows: ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << i - k + 1;
        }
        cout << endl;
    }

    return 0;
}