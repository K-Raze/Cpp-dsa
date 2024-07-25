#include <iostream>
using namespace std;

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else if (a == b)
    {
        return a;
    }
    else
    {
        return a;
    }
}

int main()
{
    int a, b, ans = 0;
    cout << "Enter row of the bishop: ";
    cin >> a;
    cout << "Enter column of the bishop: ";
    cin >> b;
    ans += min(8 - a, 8 - b);
    ans += min(8 - a, b - 1);
    ans += min(a - 1, 8 - b);
    ans += min(a - 1, b - 1);
    cout << ans << endl;

    return 0;
}