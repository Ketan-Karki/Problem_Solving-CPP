#include<bits/stdc++.h>
using namespace std;
int uniqueNUM(int arr[],int n)
{
    int xorSum=0;
    for(int i=0;i<n;i++)
    {
        xorSum=xorSum^arr[i];
    }
    return xorSum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<uniqueNUM(arr,n);
    return 0;
}
