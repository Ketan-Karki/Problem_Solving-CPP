#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string name,number,key;
    map<string,string>phoneBook;
    for(int i=0;i<n;i++)
    {
        cin>>name>>number;
        phoneBook[name]=number;
    }
    while(cin>>key)
    {
        if(phoneBook.find(key)!=phoneBook.end())
        {
            cout<<key<<"="<<phoneBook.find(key)->second<<"\n";
        }
        else
        {
            cout<<"Not found"<<"\n";
        }
    }
    return 0;
}
