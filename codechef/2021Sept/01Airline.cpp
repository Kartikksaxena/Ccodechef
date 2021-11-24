#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int d,e,i=0;
        vector<int> arr(3);
        cin>>arr[0]>>arr[1]>>arr[2]>>d>>e;
        int sum =arr[0]+arr[1]+arr[2];
        sort(arr.begin(),arr.end());
        while(i<3)
        {
            if(arr[i]>e)
                break;
            i++;
        }
        for(int j=0;j<3;j++)
	        cout<<arr[j]<<" ";
	    if(i==0)
	        cout<<"NO"<<endl;
	    else
	    {
	        sum -= arr[--i];
	        if(sum>d)
	            cout<<"NO"<<endl;
	        else
	            cout<<"YES"<<endl;
	    }
	}
	return 0;
}