
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,s;
        cin>>n>>s;
        int m_index = (n+1)/2;
        int div = n - (m_index - 1);
        cout<<s/div<<endl;
    }
    return 0;
}

