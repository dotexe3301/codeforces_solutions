#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
#include<map>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string task;
        cin>>task;
        bool seen[26] = {false};
        bool answer(true);
        for(int i = 0 ; i < n ; i++)
        {
            if(i == 0 || (task[i] != task[i-1]))
            {
                if( seen[task[i] - 'A'] )
                {
                    answer = false; 
                    break;
                } 
                else  
                {
                    seen[task[i] - 'A'] = true;
                }  
            }
        }
        cout<<(answer?"YES":"NO")<<endl;
    }
    return 0;
}