#include <iostream>
using namespace std;

int main()
{
    int a[6] = {5, 4, 6, 7, 3, 8}, ans = INT_MIN, ans1 = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if (a[i] > ans)
        {
            ans = a[i];
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (ans == a[i])
        {
            a[i] = INT_MIN;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (a[i] > ans1)
        {
            ans1 = a[i];
        }
    }
    cout << ans1 << endl;
    return 0;
}