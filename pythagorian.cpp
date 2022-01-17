#include<bits/stdc++.h>
using namespace std;
bool check(int x,int y,int z)
{
    int a=max(x,(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }


    if(a*a==b*b+c*c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z))
    {
        cout<<"Pythagorian Triplet";
    }
    else
    {
        cout<<"Not a Pythagorian Triplet";
    }
    return 0;
}
