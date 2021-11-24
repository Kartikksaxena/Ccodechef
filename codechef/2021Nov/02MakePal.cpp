#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,count_odd=0;
        cin>>n;
        
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
            if(x%2)
                count_odd++;
        }
        // count_odd = (count_odd+1)/2;
        // if(count_odd>0)
        cout<<count_odd/2<<endl;
        // else
        //     cout<<"0"<<endl;
        
    }
	// your code goes here
	return 0;
}