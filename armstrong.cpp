#include <iostream>
using namespace std;

int dig(int n)
{
    int ans = 0;
    while (n !=0 )
    {
        n /= 10;
        ans++;
    }
    return ans;
}

int arm(int n, int d)
{
    int ans = 0, rem, adder;
    while (n > 0)
    {
        rem = n % 10;
        ans += pow(rem, d);
        n /= 10;
    }
    return ans;
}

int main()
{
    int num, digit, ans;
    cout << "Enter a number to  : ";
    cin >> num;
    digit = dig(num);
    ans = arm(num, digit);
    if (ans == num)
    {
        cout << "it is an armstrong number" << endl;
    }
    else
    {
        cout << "it is not an armstrong number" << endl;
    }

    return 0;
}