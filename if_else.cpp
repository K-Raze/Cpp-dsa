#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Write your age : ";
    cin >> a;
    if (a > 18)
    {
        cout << "You are eligible for a driving test \n";
    }
    else
    {
        cout << "You are not eligible for a driving test \n";
    }
}