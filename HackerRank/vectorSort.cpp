#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int x;
    vector<int>v;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
}
