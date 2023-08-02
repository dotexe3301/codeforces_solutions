#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int alphabets[27] = {0};
        int check=1;
        int n = s.size();
        int mx = -1;
        int index = -1;
        for(int i=0 ; i<n ; i++)
        {
            alphabets[s[i]-'a']++;
            mx = max(s[i]-'a',mx);
            if(s[i]=='a')   index=i;
        }
        for(int i = 0; i<=mx ; i++)
        {
            if(!alphabets[i] || alphabets[i]>1) check = 0;
        }
        for(int i = index+1 ; i<n ; i++)
        {
            if(s[i] - s[i-1]<=0)    check = 0;
        }
        for(int i = index-1 ; i>=0 ; i--)
        {
            if(s[i] - s[i+1]<=0)    check = 0;
        }
        cout<<(check?"Yes":"No")<<endl;
    }
    return 0;
}













