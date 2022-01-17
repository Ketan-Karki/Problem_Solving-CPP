#include<bits/stdc++.h>
using namespace std;
int consecutive(int n)
{
    int ans=0;
    int x=1;
    int counter=0;
    int a=0;
    int flag=0;
    while(n>0)
    {
        n/=2;
        a++;
    }
    int arr[a];
    for(int i=0;i<a;i++)
    {
        arr[i]=n%2;
        n/=2;
    }

    for(int i=a-1;i>=0;i--)
    {
        if(arr[i]==arr[i-1] && arr[i]==1)
        {
            if(flag==1)
            {

            }
        }
        else
        {
            flag=1;
        }
    }

    return counter+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<consecutive(n);
    return 0;
}
