#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int N,e,x,a,b;
     vector<int>v;
     cin>>N;
     for(int i=0;i<N;i++)
     {
         cin>>e;
         v.push_back(e);
     }
     cin>>x;
     cin>>a>>b;
     v.erase(v.begin()+(x-1));
     v.erase(v.begin()+(a-1),v.begin()+(b-1));
     int s = v.size();
     cout<<s<<"\n";
     for(auto i =v.begin();i!=v.end();i++)
     {
         cout<<*i<<" ";
     }
 }
