#include <iostream>
using namespace std;
void convert(char &alpha)
{
    cout << char(alpha - 'a' + 'A') << endl;
}

int main()
{
    char alpha;
    cout << "Enter a small case alphabet : ";
    cin >> alpha;
    convert(alpha);

    return 0;
}