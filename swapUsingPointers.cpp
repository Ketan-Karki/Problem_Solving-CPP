#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}
