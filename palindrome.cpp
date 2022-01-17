#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char a[100];
    cin>>a;
    int x=0;
    while(a[x]!='\0')
    {
        x++;
    }
    int flag=0;
    for(int i=0;i<x;i++)
    {
        if(a[i]==a[x-1-i])
            {
                flag=1;
            }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<"\nPalindrome";
    else
        cout<<"\nNot a Palindrome";
    return 0;
}
