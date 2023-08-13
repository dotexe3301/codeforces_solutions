#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    if(m*n<2)
    {
        cout<<"0"<<endl;
        return 0;
    }
    cout<<floor((m*n)/2)<<endl;
    return 0;
}