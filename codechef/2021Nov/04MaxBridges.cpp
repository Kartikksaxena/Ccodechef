#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        bool flag = true;
        for(int i=1;i<n;i++)
        {
            cout<<i<<" "<<i+1<<endl;
            m--;
        }
        for(int i=3;i<=n && flag;i++)
        {
            for(int j=1;j<i-1;j++)
            {
                if(m-- ==0)
                {
                    flag=false;
                    break;
                }
                cout<<i<<" "<<j<<endl;
            }
        }
    }
	// your code goes here
	return 0;
}