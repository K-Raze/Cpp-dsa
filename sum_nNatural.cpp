#include <iostream>
using namespace std;
int main()
{
    int n, result = 0;
    cout << "Enter a number till you want the sum of n natural no :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        result = result + i;
    }
    cout << result << endl;
}