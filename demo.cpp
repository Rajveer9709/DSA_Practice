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

    int max_freq = -1, max_element = -1;

    for (auto it : mpp)
    {
        if (it.second > max_freq)
        {
            max_freq = it.second;
            max_element = it.first;
        }
    }

    int min_freq = INT_MAX, min_element = -1;

    for (auto it : mpp)
    {
        if (it.second < min_freq)
        {
            min_freq = it.second;
            min_element = it.first;
        }
    }

    cout << "Max frequency element is :" << max_element << " " << "and it's freq is:" << max_freq << endl;
    cout << "Min frequency element is :" << min_element << " " << "and it's freq is:" << min_freq << endl;

    int q;
    cout << "Enter the number of number you want to find:";
    cin >> q;
    while (q--)
    {
        int number;
        cout << "Enter the number:" << endl;
        cin >> number;
        cout << mpp[number] << " ";
    }
}