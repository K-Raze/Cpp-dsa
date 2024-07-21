#include <iostream>
using namespace std;

int main()
{
    int i = 65;
    int j = 97;

    while (i <= 90)
    {

        cout << char(i) << "  ";

        i++;
    }
    while (j <= 122)
    {
        cout << char(j) << " ";
        j++;
    }

    return 0;
}