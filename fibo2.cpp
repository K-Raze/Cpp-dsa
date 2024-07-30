#include <iostream>
using namespace std;

int main()
{
    int a[1000], n;
    a[0] = 0;
    a[1] = 1;
    cout << "Enter the element : ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n - 1] << endl;
    ;

    return 0;
}