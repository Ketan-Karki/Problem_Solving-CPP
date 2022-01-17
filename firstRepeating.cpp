#include<bits/stdc++.h>
using namespace std;
const int N = 100002;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]!=-1)
        {
            minidx=min(minidx,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]]=i;
        }
    }
    cout<<minidx+1<<"\n";
    return 0;
}
