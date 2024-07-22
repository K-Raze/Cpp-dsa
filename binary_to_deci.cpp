#include <iostream>
using namespace std;

int main()
{
    int n, rem, ans = 0;
    cout << "Enter a binary number :";
    cin >> n;
    for (int i = 1; n > 0; i *= 2)
    {
        rem = n % 10;
        n /= 10;
        ans = ans + rem * i;
    }
    cout << ans << endl;
    return 0;
}