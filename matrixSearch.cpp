#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    int r=0,c=m-1;
    int flag=0;
    while(r<n && c>=0)
    {
        if(arr[r][c]==x)
    {
        flag=1;
    }
    arr[r][c]>x ? c-- : r++;
    }

    if(flag==1)
    {
        cout<<"\nFOUND";
    }
    else
    {
        cout<<"\nNOT FOUND";
    }
    return 0;
}
