#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number to check whether it is prime or not  : ";
    cin >> num;
    if (num < 2)
    {
        cout << "not a prime";
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << "It is not a prime number \n";
                return 0;
            }
        }
    }
    cout << "it is a prime number ";
}