#include <iostream>
using namespace std;

int main()
{
    int a[5];
    cout << "Enter 5 number u wanted to add : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        ans += a[i];
    }
    cout << ans << endl;

    return 0;
}