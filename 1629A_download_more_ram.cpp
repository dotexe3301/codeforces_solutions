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
        unordered_map<int, int> mp;
        int GB;
        cin >> GB;
        vector<pair<long, long>> v(n);
        for (long i = 0; i < n; i++)
        {
            scanf("%ld", &v[i].first);
        }
        for (long i = 0; i < n; i++)
        {
            scanf("%ld", &v[i].second);
        }
        sort(v.begin(), v.end());
        long ram = GB;
        for (long p = 0; p < n; p++)
        {
            if (ram < v[p].first)
            {
                break;
            }
            ram += v[p].second;
        }

        printf("%ld\n", ram);
    }
    return 0;
}