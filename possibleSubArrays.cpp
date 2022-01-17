#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
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
          while(j<=counter && j<n)
                {
                    cout<<a[j]<<" ";
                    j++;
                }
                cout<<"\n";
                counter++;
        }
    }
    return 0;
}
