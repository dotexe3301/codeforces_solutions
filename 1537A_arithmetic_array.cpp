#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double sum=0;
        for(int  i = 1 ; i<=n ; i++)
        {
            int a;
            cin>>a;
            sum+=a;
        }
        cout<<(sum>=n?sum-n:1)<<endl;
    }
    return 0;
}