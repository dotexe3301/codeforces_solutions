#include<iostream>
#include<algorithm>
#include<string>
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
        string word;
        cin>>word;
        if(word.size()>10)
        {
            int len = word.size();
            cout<<word[0]<<len-2<<word[len-1]<<endl;
        }
        else
        {
            cout<<word<<endl;
        }
    }
    return 0;
}