#include <iostream>
using namespace std;

void swap(int &a, int &b, int &c)
{
    int d, e;
    d = a;
    e = c;
    a = b;
    b = e;
    c = d;
}

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    swap(a, b, c);
    cout << a << " " << b << " " << c << endl;

    return 0;
}