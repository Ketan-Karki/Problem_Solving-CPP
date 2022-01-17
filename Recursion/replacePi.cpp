#include<bits/stdc++.h>
using namespace std;
void replacePi(string s)
{
    if(s.length()==0)
    {
        return;
    }
    else if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacePi(s.substr(1));
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    replacePi(s);
    return 0;
}
