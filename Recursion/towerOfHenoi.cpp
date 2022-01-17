#include<bits/stdc++.h>
using namespace std;
void towerOfHenoi(int n,char src,char help,char dest)
{
    if(n==0)
    {
        return;
    }
    towerOfHenoi(n-1,src,dest,help);
    cout<<"Move from "<<src<<" to "<<dest<<"\n";
    towerOfHenoi(n-1,help,src,dest);
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    towerOfHenoi(n,'A','B','C');
    return 0;
}
