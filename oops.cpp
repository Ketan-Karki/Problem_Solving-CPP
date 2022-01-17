#include<bits/stdc++.h>
using namespace std;
 class student
 {
     string name;

 public:
    int age;
    bool gender;

    bool operator == (student &a)
    {
        if(name==a.name && age==a.age && gender==a.gender)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    student()
    {
        cout<<"Default Constructor\n";
    }//default const

    student(string s,int a,bool g)
    {
        cout<<"Parameterised constructor\n";
        name=s;
        age=a;
        gender=g;
    }//parameterised const

    student(student &a)
    {
        cout<<"Copy constructor\n";
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    ~student()
    {
        cout<<"Destructor called\n";
    }
 };

 int main()
 {
     student a("Ketan",19,0);
     student b;
     student c=a;

     if(c==a)
     {
         cout<<"Same\n";
     }
     else
     {
         cout<<"Not Same\n";
     }
 }
