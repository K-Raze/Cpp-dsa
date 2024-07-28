#include <iostream>
using namespace std;

int main()
{
    char alpha[26];
    for (int i = 0; i < 26; i++)
    {
        alpha[i] = char('a' + i);
    }
    for (int i = 0; i < 26; i++)
    {
        cout << alpha[i] << " ";
    }
    cout << endl;

    return 0;
}