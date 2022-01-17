#include<bits/stdc++.h>
using namespace std;

int main()
{

    int ketan[5];
    int *kp0 = &ketan[0];
    int *kp1 = &ketan[1];
    int *kp2 = &ketan[2];

    cout<<"kp0 is at "<<kp0<<"\n";
    cout<<"kp1 is at "<<kp1<<"\n";
    cout<<"kp2 is at "<<kp2<<"\n";

    kp0+=2;
    cout<<"kp0 is now at "<<kp0<<"\n";

    kp0--;
    cout<<"kp0 is now at "<<kp0<<"\n";
}
