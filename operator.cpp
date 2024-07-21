#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Write a number : ";
    cin >> num;
    if (num % 2 == 0 && num > 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
