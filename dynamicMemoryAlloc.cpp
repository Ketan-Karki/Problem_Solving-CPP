#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a=10;   //stored in stack
    int *p=new int(); //allocate memory in heap
    *p=10;
    delete(p);
    p=new int[4];
    delete[]p; //deallocate memory
    p=NULL;
    return 0;
}
