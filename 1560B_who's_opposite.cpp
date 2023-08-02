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
        int a,b,c,a1,b1;
        cin>>a1>>b1>>c;

        a = max(a1,b1);
        b = min(a1,b1);

        if(2*(a-b)>=c && (a-b)>=b)
        {
            if(c<=(a-b))
            {
                c+=(a-b);
            }
            else{
                c-=(a-b);
            }
            cout<<c<<endl;
            continue;
        }
        cout<<-1<<endl;
    }
    return 0;
}