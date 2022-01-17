#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string str;
    cin>>str;
    char freq[25];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<str.size();i++)
    {
        freq[str[i]-'a']++;
    }
    char ans='a';
    int maxF=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxF)
        {
            maxF=freq[i];
            ans=i+'a';
        }
    }

    cout<<maxF<<" "<<ans<<"\n";
    return 0;
}
