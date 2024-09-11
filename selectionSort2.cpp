#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {'x','y','a','c','b'};
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (int(arr[index]) > int(arr[j]))
            {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}