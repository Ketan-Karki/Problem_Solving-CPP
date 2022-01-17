#include<bits/stdc++.h>

using namespace std;

int totSum(int a[],int n)
{
    if(n==0)
    {
        return 0;
    }
    return(a[n-1]+totSum(a,n-1));
}

int main()
{
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum = totSum(arr,n);
    cout<<"Sum of all elements: "<<sum;
}
