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
    int count=0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)>=2)
            count++;
    }
    cout<<count<<endl;
    return 0;
}