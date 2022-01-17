#include<bits/stdc++.h>
using namespace std;


int* game_with_number(int arr[], int n);

int bitwiseOr(int a,int b)
{
    int result=0;
    int c=0;
    while(a>0 || b>0)
    {
        if((a%2==0)&&(b%2==0))
        {
            result+=pow(2,c)*0;
        }
        else
            result+=pow(2,c)*1;

            a=a/2;
            b=b/2;
            c++;
    }
    return result;
}

int main()
{

    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        int *arr2;

        arr2 = game_with_number(arr, n);
        for(int i = 0;i < n; i++)
            cout << arr2[i] << " ";

        cout << endl;

    }

}
// } Driver Code Ends


int* game_with_number(int arr[], int n)
{

    // Complete the function
    for(int i=0;i<n;i++)
    {
        if(i<n-1)
            arr[i]=bitwiseOr(arr[i],arr[i+1]);
    }
    return arr;
}
