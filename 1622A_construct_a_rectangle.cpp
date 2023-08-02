#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long a, b, c;
        cin >> a >> b >> c;
        if (a == b + c || b == a + c || c == a + b)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if ((a % 2 == 0 && b == c) || (b % 2 == 0 && a == c) || (c % 2 == 0 && a == b))
        {
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}