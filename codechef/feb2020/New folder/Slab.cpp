#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,tax;
       cin>>n;
       if(n>1500000)
            tax=(n-1500000)*0.3 + 250000*0.75;
       else if(n>1250000)
            tax=(n-1250000)*0.25 + 250000*0.5;
       else if(n>1000000)
            tax=(n-1000000)*0.2 + 250000*0.3;
       else if(n>750000)
            tax=(n-750000)*0.15 + 250000*0.15;
        else if(n>500000)
            tax=(n-500000)*0.1 + 250000*0.05;
        else if(n>250000)
            tax=(n-250000)*0.05;
        else
            tax=0;
        cout<<(n-tax)<<endl;
    }
}
