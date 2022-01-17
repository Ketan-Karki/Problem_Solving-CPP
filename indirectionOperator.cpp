#include<bits/stdc++.h>
#include "Sally.cpp"
using namespace std;

int main()
{
    Sally sallyObject;
    Sally *sallyPointer = &sallyObject;

    sallyObject.printCrap();
    sallyPointer->printCrap();
}
