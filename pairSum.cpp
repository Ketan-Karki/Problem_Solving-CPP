#include<bits/stdc++.h>
using namespace std;
int sorter(int arr[],int n)
{
    int counter=1;
    while(counter<n)
    {
       for(int i=0;i<n-counter;i++)
      {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
      }
    counter++;
    }
    return arr[n];
}
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
    int k;
    cin>>k;
    sorter(arr,n);
    int x=0;
    int y=1;
    int flag=0;
    int low=arr[0];
    int high=arr[n-1];
    while(low!=high)
    {
        low=arr[x];
        high=arr[n-y];
        if(low+high==k)
        {
            flag=1;
            cout<<x<<" "<<n-y<<"\n";
            break;
        }
        else if(low+high>k)
        {
            y++;
        }
        else
        {
            x++;
        }
    }
    if(flag==0)
    {
        cout<<"false\n";
    }
    else
    {
        cout<<"true\n";
    }

 return 0;
}
