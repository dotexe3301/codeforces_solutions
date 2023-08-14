#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
int main()
{
    int row = -1;
    int col = -1;
    for(int i = 0 ; i<5 ; i++)
    {
        for(int j = 0 ; j<5 ; j++)
        {
            int temp;
            cin>>temp;
            if(temp==1)
            {
                row = i;
                col = j;
            }
        }
    }
    if(row==2 && col==2)
    {
        cout<<0<<endl;
        return 0;
    }
    col = abs(col-2);
    row = abs(row-2);
    cout<<row+col<<endl;
    return 0;
}