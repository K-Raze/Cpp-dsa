#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int w = n; w > 0; w--)
    {
        for (int x = 1; x <= n - w; x++)
        {
            cout << " ";
        }
        for (int y = 1; y <= w; y++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}