#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a;
    float p=10000;
    float r=0.03;

    for(int day=1;day<=30;day++)
    {
        a=p*pow(1+r,day);
        cout<<day<<"------ $"<<a<<"\n";
    }
}
