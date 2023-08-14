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
    int arr[n];
    int sum=0;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sum/=2;
    sort(arr,arr+n);
    int noOfCoins=0;
    int compare=0;
    for(int i = n-1 ; i>=0 ; i--)
    {
        compare+=arr[i];
        noOfCoins++;
        if(compare>sum)
            break;
    }
    cout<<noOfCoins<<endl;
    return 0;
}