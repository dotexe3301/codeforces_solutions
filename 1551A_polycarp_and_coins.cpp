#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        int c1=0,c2=0;
        if(num%3==0)
        {
            cout<<num/3<<" "<<num/3<<endl;
            continue;
        }
        if(num%3==1)
        {
            cout<<num/3 + 1<<" "<<num/3<<endl;
            continue;
        }
        cout<<num/3<<" "<<num/3 + 1<<endl;
    }
    return 0;
}
