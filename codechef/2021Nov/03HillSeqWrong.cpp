// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,x;
//         cin>>n;
//         set<int,greater<int>> st;
//         vector<int> a;
//         for(int i=0;i<n;i++)
//         {
//             cin>>x;
//             if(st.find(x)==st.end())
//                 st.insert(x);
//             else
//                 a.push_back(x);
//         }
//         sort(a.begin(),a.end());
//         for(auto pr:st)
//             a.push_back(pr);
//         for(int i=0;i<a.size();i++)
//             cout<<a[i]<<" ";
//         cout<<endl;
//     }
// 	// your code goes here
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        bool flag = true;
        set<int,greater<int>> st;
        set<int> a;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(st.find(x)==st.end())
                st.insert(x);
            else
            {
                if(a.find(x)==a.end())
                    a.insert(x);
                else
                    flag=false;
            }
        }
        if(flag)
        {
            for(auto pr:a)
                cout<<pr<<" ";
            for(auto pr:st)
                cout<<pr<<" ";
        }
        else
            cout<<"-1";
        cout<<endl;
    }
	// your code goes here
	return 0;
}