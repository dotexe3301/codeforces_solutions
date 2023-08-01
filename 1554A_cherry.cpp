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
        long long prev=0,answer=0;
        for(int i=0  ; i<n ; i++)
        {
            int x;
            cin>>x;
            long long product = prev * x;
            answer = max(answer,product);
            prev = x;
        }
        cout<<answer<<endl;
    }
    return 0;
}