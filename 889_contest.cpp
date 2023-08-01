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
        int arr[n];
        int moves = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            cin>>arr[i];
            if(arr[i] == i+1)
            {
                moves++;
            }
        }
        if(moves==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(moves==1)
        {
            cout<<1<<endl;
            continue;
        }
        cout<<moves-1<<endl;
    }
    return 0;
}