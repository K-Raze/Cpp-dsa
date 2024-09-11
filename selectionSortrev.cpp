#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 4, 3, 2, 8};
    int n = 5;
    for (int i = n - 1; i > 0; i++)
    {
        int index = i;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[index])
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