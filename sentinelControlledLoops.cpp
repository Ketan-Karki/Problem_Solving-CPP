#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int age;
    int total=0;
    int n=0;
    cout<<"Enter first person's age or -1 to quit\n";
    cin>>age;
    while(age!=(-1))
    {
        total=age+total;
        n++;
        cout<<"Enter next person's age or -1 to quit\n";
        cin>>age;
    }
    cout<<"Number of people entered: "<<n<<"\n";
    cout<<"Average Age: "<<(total/n)<<"\n";
    return 0;
}
