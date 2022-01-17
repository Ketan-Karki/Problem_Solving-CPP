#include<bits/stdc++.h>
using namespace std;
int firstocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    else
    {
        firstocc(arr,n,i+1,key);
    }
}
int lastocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    int restArray=lastocc(arr,n,i+1,key);
    if(restArray!=-1)
    {
        return restArray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
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
    int i=0,key;
    cin>>key;
    cout<<firstocc(arr,n,i,key)<<"\n";
    cout<<lastocc(arr,n,i,key);
    return 0;
}
