#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string str;
    char ans[100];
    cin>>str;
    int j=1;
    ans[0]=str[0];
    for(int i=1;i<str.size();i++)
    {
        if(str[i]!=str[i-1])
        {
            ans[j]=str[i];
            j++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
