#include<iostream>
using namespace std;
void printmove()
{
    cout<<"8 8"<<endl;
    cout<<"7 7"<<endl;
    cout<<"6 8"<<endl;
    cout<<"1 3"<<endl;
    cout<<"3 1"<<endl;
    cout<<"8 6"<<endl;
    cout<<"7 5"<<endl;
    cout<<"8 4"<<endl;
    cout<<"5 1"<<endl;
    cout<<"1 5"<<endl;
    cout<<"4 8"<<endl;
    cout<<"3 7"<<endl;
    cout<<"2 8"<<endl;
    cout<<"1 7"<<endl;
    cout<<"7 1"<<endl;
    cout<<"8 2"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,i;
        cin>>r>>c;
        if(r==1 && c==1)
        {
            cout<<"16"<<endl;
            printmove();
        }
        else if(r==c)
        {
            cout<<"17"<<endl;
            cout<<"1 1"<<endl;
            printmove();
        }
        else
        {
            cout<<"18"<<endl;
            cout<<(r+c)/2<<" "<<(r+c)/2<<endl;
            cout<<"1 1"<<endl;
            printmove();
        }
    }
    return 0;
}
