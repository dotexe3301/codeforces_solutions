#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<int> b, c;

        // Separate elements into b and c
        b.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < b.size(); j++)
            {
                if (b[j] % a[i] == 0)
                {
                    b.push_back(a[i]);
                }
                else
                {
                    c.push_back(a[i]);
                }
            }
        }

        if (c.size()==0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (int num : b)
            {
                cout << num << " ";
            }
            cout << endl;
            for (int num : c)
            {
                cout << num << " ";
            }
            cout << endl;
        }
    }
    return 0;
}