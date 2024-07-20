#include <iostream>
using namespace std;
int main()
{
    int num, pow, result;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Enter a power : ";
    cin >> pow;
    result = num;
    for (int i = 1; i < pow; i++)
    {
        result = result * num;
    }
    cout << result << endl;
}
