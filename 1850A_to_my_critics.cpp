#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
    int i;
    cin>>i;
    while(i--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<((a[1]+a[2]>=10)?"Yes":"No")<<endl;
    }
    return 0;
}