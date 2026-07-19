#include <bits/stdc++.h>
using namespace std;

void rev(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int a[5] = {2, 3, 7, 4, 8};

    rev(a, 5);

    for (int k = 0; k < 5; k++)
    {
        cout << a[k] << " ";
    }

    return 0;
}