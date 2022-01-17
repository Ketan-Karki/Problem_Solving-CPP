#include<bits/stdc++.h>
using namespace std;
void primeSeive(int n)
{
    int prime[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cout<<"Enter the Value of Number up to which you want prime numbers:";
    cin>>n;
    primeSeive(n);
    return 0;
}
