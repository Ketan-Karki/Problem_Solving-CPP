#include<bits/stdc++.h>;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1][n2];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>a[i][j];
        }
    }
    int b[n2][n3];
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>b[i][j];
        }
    }
    int c[n1][n3];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            int x=0;
            int y=0;
            c[i][j]=0;
            while(x<n2 && y<n2)
            {
                c[i][j]+=a[i][x++] * b[y++][j];
            }
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;

}
