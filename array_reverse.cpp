#include <iostream>
using namespace std;

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6}, c;

    for (int i = 0; i < 3; i++)
    {
        c = a[i];
        a[i] = a[5 - i];
        a[5 - i] = c;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
 
    return 0;
}