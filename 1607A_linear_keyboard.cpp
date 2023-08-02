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
        map<char,int>keys;
        string keyboard,s;
        cin>>keyboard;
        for(int i =0 ; i<26 ; i++)
            keys[keyboard[i]] = i;
        cin>>s;
        long long time=0;
        int n = s.size();
        for(int i = 1 ; i<n ; i++)
        {
            time+= abs(keys[s[i]] - keys[s[i-1]]);
        }
        cout<<time<<endl;
    }
    return 0;
}