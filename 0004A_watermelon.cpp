#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0 && n>2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}