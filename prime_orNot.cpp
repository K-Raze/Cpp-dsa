#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int i = 2;
    if (n >= 2)
    {
        while (i < n)
        {
            if (n % i == 0)
            {
                cout << "it is not a prime number" << endl;
                return 0;
                ;
            }

            i++;
        }
    }
    else
    {
        cout << "It is not a prime number" << endl;
        return 0;
    }
    cout << "it is prime number" << endl;

    return 0;
}