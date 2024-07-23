#include <iostream>
using namespace std;
int fac(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    int n, r, ans;
    cout << "Enter  number and base : ";
    cin >> n >> r;
    ans = fac(n) / (fac(r) * fac(n - r));
    cout << ans << endl;
    return 0;
}