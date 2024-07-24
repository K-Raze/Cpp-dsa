#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cout << "Enter a number : ";
    cin >> n;
    while (n >= 5)
    {
        ans += (n / 5);
        n /= 5;
    }
    cout << ans << endl;
}