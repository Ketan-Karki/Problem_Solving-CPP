#include<bits/stdc++.h>
using namespace std;
int setBit(int a,int pos)
{
    return((a & (1<<pos))!=0);
}
void unique2Num(int arr[],int n)
{
    int xorSum=0;
    for(int i=0;i<n;i++)
    {
        xorSum=xorSum^arr[i];
    }
    int tempXor=xorSum;
    int pos=0;
    int x=0;
    while(x!=1)
    {
        x=xorSum & 1;
        pos++;
        xorSum=xorSum>>1;
    }
    int newXor=0;
    for(int i=0;i<n;i++)
    {
        if(setBit(arr[i],pos-1))
        {
            newXor=newXor^arr[i];
        }
    }
    cout<<newXor<<"\n";
    cout<<(tempXor^newXor)<<"\n";
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
    unique2Num(arr,n);
    return 0;
}
