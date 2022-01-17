#include<bits/stdc++.h>
using namespace std;
bool isPowerOf2(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return !(n & n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<isPowerOf2(n)<<"\n";
    return 0;
}
