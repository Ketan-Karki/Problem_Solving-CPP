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
    int r_st=0,r_end=n-1,c_st=0,c_end=m-1;
    int i=0,j=0;
    while(r_st<=r_end || c_st<=c_end)
    {
        while(j<c_end)
        {
            cout<<arr[r_st][j]<<" ";
            j++;
        }
        r_st++;
        while(i<r_end)
        {
            cout<<arr[i][c_end]<<" ";
            i++;
        }
        c_end--;
        while(j>c_st)
        {
            cout<<arr[r_end][j]<<" ";
            j--;
        }
        r_end--;
        while(i>r_st)
        {
            cout<<arr[i][c_st]<<" ";
            i--;
        }
        c_st++;
    }
    return 0;

}
