#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows ; ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << char('A' + k - 1);
        }
        for (int l = i - 1; l > 0; l--)
        {
            cout << char('A' + l - 1);
        }

        cout << endl;
    }

    return 0;
}