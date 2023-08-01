#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
#include<map>
using namespace std;
int main()
{
    
    vector<int>v;
    for(int i = 1 ; i<=1666 ; i++)
    {
        if(i%3==0)  continue;
        if(i%10==3) continue;
        v.push_back(i);
    }
    long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<v[n-1]<<endl;
    }
    return 0;
}