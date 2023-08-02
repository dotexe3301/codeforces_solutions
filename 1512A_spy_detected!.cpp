#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <map>
#include <unordered_map>
#include <cmath>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0 && arr[i] != arr[i + 1] && arr[i] != arr[i + 2])
            {
                cout << (i + 1) << endl;
                break;
            }
            if (i == 0 && arr[i] != arr[i + 1] && arr[i] == arr[i + 2])
            {
                continue;
            }
            if (i == n - 1)
            {
                cout << (i + 1) << endl;
                break;
            }
            if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1])
            {
                cout << (i + 1) << endl;
                break;
            }
        }
    }

    return 0;
}