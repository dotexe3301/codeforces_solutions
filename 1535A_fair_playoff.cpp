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
        vector<pair<int,int>>tour(4);
        for(int i=0 ; i<4 ; i++)
        {
            cin>>tour[i].first;
            tour[i].second = i;
        }
        sort(tour.begin(),tour.end());
        int x = tour[0].second, y = tour[1].second;
        x /= 2;
        y /= 2;
        cout<<(x==y?"NO":"YES")<<endl;
    }
    return 0;
}