#include <iostream>
using namespace std;

long long bin(int n)
{
    long long rem, ans = 0, i = 1;
    while (n != 0)
    {
        rem = n % 2;
        ans = rem * i + ans;
        n /= 2;
        i *= 10;
    }
    return ans;
}

int main()
{
    long long a, b, n, r1, r2, ans = 0, b1, b2;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    if (bin(a) > bin(b))
    {
        n = bin(a);
    }
    else
    {
        n = bin(b);
    }
    b1 = bin(a);
    b2 = bin(b);
    while (n != 0)
    {
        r1 = b1 % 10;
        r2 = b2 % 10;
        if (r1 != r2)
        {
            ans++;
        }
        b1 /= 10;
        b2 /= 10;
        n /= 10;
    }
    cout << ans << endl;

    return 0;
}