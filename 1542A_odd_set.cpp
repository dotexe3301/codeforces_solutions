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
    int count(0);
    while(t--)
    {
        int n;
        cin>>n;
        for(int i = 0 ;i<2 * n ; i++)
        {
            int value;
            cin>>value;
            count+= value%2;
        }
        cout<< (count==n ?"Yes":"No")<<endl;
        count=0;
    }
    return 0;
}
