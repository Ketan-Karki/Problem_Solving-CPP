#include<bits/stdc++.h>
using namespace std;
int getBit(int n,int pos)
{
    return((n & (1<<pos))!=0);
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int pos;
    cin>>pos;
    cout<<getBit(n,pos)<<"\n";
    return 0;
}
