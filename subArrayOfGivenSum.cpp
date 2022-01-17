#include <bits/stdc++.h>
using namespace std;

int main()
{
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    int n,s,sum;
	    cin>>n>>s;
	    int arr[n];
	    for(int j = 0; j<n; j++)
        {
	        cin>>arr[j];
	    }
	    int ans[2];
	    for(int j = 0; j<n; j++)
	    {
	         sum = 0;
	        for(int k = j; k<n; k++){
	            sum+=arr[k];
	            if(sum==s)
            {
	            ans[0]=j+1;
	            ans[1] = k+1;
	            break;

	            }
	           if(sum==s)
	           break;
	        }
	        if(sum==s)
	        break;
	    }
	    if(sum==s)
	    cout<<ans[0]<<" "<<ans[1]<<endl;
	    else
	    cout<<"-1";

	}
	return 0;
}
