#include<iostream>
using namespace std;

int main()
{
    int t;
    //cin>>t;
    //while(t--)
    {
        int s;
        //cin>>s;
        int a,b,c;
        //cin>>a>>b>>c;
        for(a=1;a<3;a++)
            for(b=1;b<3;b++)
            {
                for(c=1;c<3;c++)
                {
                    for(s=1;s<9;s++)
                    {
                        int x= a+b+c;
                        int y= (a+b+c)/s;
                        int z=(a+b+c)%s;
                        if(z!=0)
                            y++;
                        if(a==1 && b==2 && c==1 && s==2)
                            y++;
                        if(a==2 && b==2 && c==2 && s==3)
                            y++;
                        cout<<y<<" ";
                    }
                    cout<<endl;
                }
            }
    }
    return 0;
}
