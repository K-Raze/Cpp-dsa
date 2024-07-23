#include <iostream>
using namespace std;

void rev(int n)
{
    int rem, ans = 0;
    while (n != 0)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        n /= 10;
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cout << "Enter a number to reverse it : ";
    cin >> n;
    rev(n);

    return 0;
}