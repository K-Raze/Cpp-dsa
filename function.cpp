#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int a, b;
    cout << "Enter 2 number you want to swap : ";
    cin >> a >> b;
    swap(a, b);
    cout << a << b;

    return 0;
}