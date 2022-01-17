#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temp,c;
    cout<<"Enter your choice\n 1)Convert Celsius to Fahrenheit\n 2)Convert Fahrenheit to Celsius\n";
    cin>>c;
    if(c==1)
    {
        cout<<"Enter the Temperature in Celsius : ";
        cin>>temp;
        cout<<"Temperature in Fahrenheit is : "<<(((temp*9)/5)+32);
    }
    else if(c==2)
    {
        cout<<"Enter the Temperature in Fahrenheit : ";
        cin>>temp;
        cout<<"Temperature in Celsius is : "<<(((temp-32)*5)/9);
    }
}
