#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number you till you want the square of the numbers : ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cout << i << "Square is:" << i * i << endl;
    }
    for (char name = 'a'; name <= 'z'; name++)
    {
        cout << name << endl;
    }
}