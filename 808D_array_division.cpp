#include<iostream>
#include<map>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int arr[n+5];
    long long sum=0;
    for(int i = 0 ; i <n ; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum & 1) 
    {
        cout<<"NO";
        return 0;
    }
    
    map<long long,int>first,second;
    first[arr[0]]= 1;
    
    for(int i = 1 ; i<n ; i++)  second[arr[i]]++;
    
    long long sdash = 0;
    for(int i=0 ; i<n ; i++)
    {
        sdash += arr[i];      // first i numbers
        if(sdash == sum/2)
        {
            cout<<"YES";
            return 0;
        }
        if(sdash< sum/2)
        {
            long long x = (sum/2) - sdash;
            // delete element from second half and insert into first half
            if(second[x]>0)
            {
                cout<<"YES";
                return 0;
            }
        }
        else
        {
            long long y = sdash - (sum/2);
            if(first[y]>0)
            {
                cout<<"YES";
                return 0;
            }
        }
        first[arr[i+1]]++;
        second[arr[i+1]]--;
    }
    cout<<"NO";
    return 0;
}