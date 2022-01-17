#include<bits/stdc++.h>
using namespace std;
void d2h(int n)
{
    int i=0;
    int a=0;
    int s[n];
    while(n>0)
    {
        int lastDigit=n%16;
        s[i]=lastDigit;
        i++;
        n/=16;
        a++;
    }
    for(int i=a-1;i>=0;i--)
    {
        if(s[i]>=10&&s[i]<=15)
        {
            switch(s[i])
            {
                case 10:cout<<"A";
                break;
                case 11:cout<<"B";
                break;
                case 12:cout<<"C";
                break;
                case 13:cout<<"D";
                break;
                case 14:cout<<"E";
                break;
                case 15:cout<<"F";
                break;
            }
        }
        else
        {
            cout<<s[i];
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    d2h(n);
    return 0;
}
