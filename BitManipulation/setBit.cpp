#include<bits/stdc++.h>
using namespace std;
int getBit(int n,int i)
{
   return(n | (1<<i));
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int pos;
    cin>>pos;
    cout<<getBit(n,pos);
    return 0;
}
