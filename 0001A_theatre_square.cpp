#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
int main()
{
     long double a, n, m, temp;
    
    cout.precision(22);     // acc to testcases
    cin >> n >> m >> a;
    if(m < n)
    {
        temp = m;
        m = n;
        n = temp;
    }
   
    if(a >= m)
    {
        cout << ceil(n/a) << endl;
    }
    else
    {
        cout << ceil(m/a)*ceil(n/a) << endl;
    }
}