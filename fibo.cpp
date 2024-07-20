#include <iostream>
using namespace std;
int main()
{
    int last = 0, pre = 1, curr, n;
    cout << "Enter a number to write fibonacci series upto it : ";
    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
    }
    else if (n == 2)
    {
        cout << 1 << endl;
    }
    else
    {

        for (int i = 3; i <= n; i++)
        {
            curr = pre + last;
            last = pre;
            pre = curr;
        }

        cout << curr << endl   ;
    }
}
