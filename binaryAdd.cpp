#include<bits/stdc++.h>
using namespace std;
void addBinary(int a,int b)
{
    int ans=0;
    int carry=0;
    int i=0;
    int s[2*a];
    while(a>0&&b>0)
    {
        if(a%2==0&&b%2==0)
        {
            ans=carry;
            carry=0;
        }
        else if((a%2==0&&b%2==1)||(a&2==1||b%2==0))
        {
            if(carry==1)
            {
                ans=0;
                carry=1;
            }
            else
            {
                ans=1;
                carry=0;
            }
        }
        else
        {
            ans=carry;
            carry=1;
        }
        s[i++]=ans;
        a/=10;
        b/=10;
    }
    int q=i;
    while(a>0)
    {
        if(carry==1)
        {
            if(a%2==1)
            {
                ans=0;
                carry=1;
            }
            else
            {
                ans=1;
                carry=0;
            }
        }
        else
        {
            ans=(a%2);
        }
        s[q++]=ans;
        a/=10;
    }

    while(b>0)
    {
        if(carry==1)
        {
            if(b%2==1)
            {
                ans=0;
                carry=1;
            }
            else
            {
                ans=1;
                carry=0;
            }
        }
        else
        {
            ans=(b%2);
        }
        s[q++]=ans;
        b/=10;
    }

    if(carry==1)
    {
        ans=1;
        s[q++]=ans;
    }
    int x=q;
    for(int i=x;i>=0;i--)
    {
        cout<<s[i];
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    addBinary(a,b);
    return 0;
}
