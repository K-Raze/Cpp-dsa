#include <iostream>
using namespace std;

int main()
{
    int n, rem, ans = 0;
    cout << "Enter a number to convert in binary : ";
    cin >> n;
    for (int i = 1; n > 0; i *= 10)
    {
        rem = n % 2;
        n /= 2;
        ans = rem * i + ans;
    }
    cout << ans << endl;
    return 0;
}