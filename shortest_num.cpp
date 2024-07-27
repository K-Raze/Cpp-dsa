#include <iostream>
using namespace std;

int main()
{
    int a[5];
    cout << "Enter 5 number : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int ans = INT_MAX;
    cout << "Enter 5 number : ";
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < ans)
        {
            ans = a[i];
        }
    }
    cout << ans << endl;

    return 0;
}