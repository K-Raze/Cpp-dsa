#include <iostream>
using namespace std;
int main()
{
    int n, result = 1;
    cout << "Enter a number to find it's factorial :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    cout << "the factorial of" << n << "is :" << result << endl;
    return 0;
}