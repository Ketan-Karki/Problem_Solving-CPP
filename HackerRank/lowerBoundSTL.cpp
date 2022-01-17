#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int n,x,q,y;
     vector<int>v;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>x;
         v.push_back(x);
     }
     cin>>q;
     while(q!=0)
     {
         cin>>y;
         auto it=lower_bound(v.begin(),v.end(),y);
         if(*it==y)
         {
             cout<<"Yes "<<(it-v.begin()+1)<<"\n";
         }
         else
         {
             cout<<"No "<<(it-v.begin()+1)<<"\n";
         }
         q--;
     }
 }
