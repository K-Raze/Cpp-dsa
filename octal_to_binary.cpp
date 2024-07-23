#include <iostream>
using namespace std;

int main()
{
    int n, rem, ans = 0, i = 1, bin = 0, j = 1;
    cout << "Enter a octal number : ";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        ans = ans + rem * i;
        n /= 10;
        i *= 8;
    }
    while (ans != 0)
    {
        rem = ans % 2;
        bin = bin + rem * j;
        j *= 10;
        ans /= 2;
    }
    cout << bin << endl;
}
