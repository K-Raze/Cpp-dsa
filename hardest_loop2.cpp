#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter num of rows: ";
    cin >> n;
    for (int w = 1; w <= n; w++)
    {
        for (int x = 1; x <= w; x++)
        {
            cout << "*";
        }
        for (int y = 1; y <= 2 * (n - w); y++)
        {
            cout << " ";
        }
        for (int x = 1; x <= w; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int m = 1; m <= i; m++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}