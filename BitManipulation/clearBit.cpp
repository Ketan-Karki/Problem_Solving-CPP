#include<bits/stdc++.h>
using namespace std;
int updateBit(int n,int i,int val)
{
    int cl=(~(1<<i) & n);
    return(cl | (val<<i));
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n,pos,val;
    cin>>n>>pos>>val;
    cout<<updateBit(n,pos,val);
    return 0;
}
