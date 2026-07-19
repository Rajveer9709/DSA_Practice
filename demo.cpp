#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of string:";
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cout << "Enter the number of number you want to find:";
    cin >> q;
    while (q--)
    {
        int number;
        cout << "Enter the number:";
        cin >> number;
        cout << mpp[number] << " ";
    }
}