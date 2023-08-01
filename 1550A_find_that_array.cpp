#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s = sqrt(n);      // s would be length of that array, if its each element is a perfect square root of given 'n'
        while(s * s < n)
        {
            s++;
        }
        cout<<s<<endl;
    }
    return 0;
}