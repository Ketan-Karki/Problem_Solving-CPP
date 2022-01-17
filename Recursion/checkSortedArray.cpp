#include<bits/stdc++.h>
using namespace std;
bool sorted(int n, int arr[])
{
    if(n==1)
    {
        return true;
    }
    bool restArray=sorted(n-1,arr+1);
    return(arr[0]<arr[1] && restArray);
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
    cout<<sorted(n,arr);
    return 0;
}
