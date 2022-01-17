#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int q,x,y;
     set<int>s;
     cin>>q;
     while(q)
     {
         cin>>y;
         cin>>x;
         switch(y)
         {
             case 1 : s.insert(x);
             break;
             case 2 : s.erase(x);
             break;
             case 3 :  auto it=s.find(x);
             if(it!=s.end())
             {
                 cout<<"Yes\n";
             }
             else
             {
                 cout<<"No\n";
             }
         }
         q--;
     }
 }
