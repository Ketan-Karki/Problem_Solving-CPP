//brute force approach//
//effective approach is kadane's algo//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int counter=i;
        while(counter<n)
        {
            int j=i;
            int sum=0;
            while(j<=counter && j<n)
            {
                sum+=a[j];
                j++;
            }
            mx=max(sum,mx);
            counter++;
        }
    }
    cout<<mx<<"\n";
    return 0;
}
