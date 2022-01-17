#include<bits/stdc++.h>
using namespace std;
void subseq(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<"\n";
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
}
int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    subseq(s,"");
    return 0;
}
