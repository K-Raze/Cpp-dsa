#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a, b;
    cout << "Enter 2 number to swap : ";
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}