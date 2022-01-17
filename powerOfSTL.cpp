#include<bits/stdc++.h>
using namespace std;

bool f(int x,int y)
{
    return x>y;
}

void vectorDemo()
{
    vector<int>A={11,2,3,14};
    cout<<A[1]<<"\n";
    sort(A.begin(),A.end());//0(nlogn)
    //2,3,11,14
    bool present=binary_search(A.begin(),A.end(),3);//true
    present=binary_search(A.begin(),A.end(),4);//false
    cout<<present<<endl;
    A.push_back(100);
    present=binary_search(A.begin(),A.end(),100);//true
    cout<<present<<endl;
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    //2,3,11,14,100,100,100,100,100,123
    auto it1=lower_bound(A.begin(),A.end(),100);// >=
    auto it2=upper_bound(A.begin(),A.end(),100);// >
    cout<<*it1<<" "<<*it2<<"\n";//100 123
    cout<<it2-it1<<"\n";//5
    sort(A.begin(),A.end(),f);//sorting in descending order
    for(int &x:A)//reference
    {
        x++;
    }
    for(int x:A)
    {
        cout<<x<<" ";//values incremented
    }
    cout<<"\n";
}

void setDemo()
{
    set<int>S;
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);
    for(int x:S)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    //-10 -1 1 2
    auto it=S.find(-1);
    if(it==S.end())
    {
        cout<<"Not Present\n";
    }
    else
    {
        cout<<"Present\n";
        cout<<*it<<endl;
    }
    auto it2=S.upper_bound(-1);
    auto it3=S.upper_bound(0);
    cout<<*it2<<" "<<*it3<<endl;// 1 1
    auto it4=S.upper_bound(2);
    if(it4==S.end())
    {
        cout<<"Oops!Sorry can't find anything like that\n";
    }
    S.erase(1);
    for(int x:S)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    //-10 -1 2
}

void mapDemo()
{
    map<int,int>A;
    A[1]=100;
    A[2]=-1;
    A[3]=200;
    A[100000232]=1;
    map<char,int>cnt;
    string x="Ketan Karki";
    for(char c:x)
    {
        cnt[c]++;
    }
    cout<<cnt['a']<<" "<<cnt['z']<<endl; //2 0

}

void powerOfStl()
{
    //[x,y]
    /*add[2,3]
    add[10,20]
    add[30,400]
    add[401,450]
    give me the interval in which my point lies*/
    set<pair<int,int>>S;
    S.insert({401,450});
    S.insert({10,20});
    S.insert({2,3});
    S.insert({30,400});
    //2,3
    //10,20
    //30,400
    //401,450
    int point=401;
    auto it=S.upper_bound({point,INT_MAX});
    if(it==S.begin())
    {
        cout<<"Not Present in any interval..\n";
        return;
    }
    it--;
    pair<int,int>current=*it;
    if(current.first<=point && current.second>=point)
    {
        cout<<"Yes it is Present in Interval: {"<<current.first<<","<<current.second<<"}\n";
    }
    else
    {
        cout<<"Not Present in any interval..\n";
    }
}

int main()
{
  powerOfStl();
}
