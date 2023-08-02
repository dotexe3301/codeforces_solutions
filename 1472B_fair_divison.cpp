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
        int weight=0;
        int one=0;
        int div=0;
        for(int i=1 ; i<=n ; i++)
        {
            int candy;
            cin>>candy;
            if(candy==1)    
            {
                weight+=1;
                one++;
            }
            else    weight+=2;
        }
        if(weight%2==0)
        {
            div = weight/2;
            if(div%2==0 || one)
                cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}