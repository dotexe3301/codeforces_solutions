
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int answer=0;
    int time = 240 - k;
    int ptime=0;
    for(int i= 1 ; i<=n ; i++)
    {
        ptime += i*5;
        if(ptime<=time) answer++;
        else    break;
    }
    cout<<answer;
    return 0;
}