#include<bits/stdc++.h>
using namespace std;

class ketansClass
{
    public:
        ketansClass(string z)
        {
            setName(z);
        }
        void setName(string x)
        {
           name=x;
        }

        string getName()
        {
           return name;
        }
    private:
        string name;
};

int main()
{
    ketansClass ko("Lucky Kavi");
    cout<<ko.getName();
    ketansClass ko2("Kira");
    cout<<ko2.getName();
    return 0;
}
