#include<iostream>
using namespace std;

template<class T>
void swap1(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}


int main()
{
    int a=10,b=20;
    float c=12.3,d=32.1;
    char e='S',f='K';

    cout<<"Before Swapping: "<<a<<" "<<b<<endl<<c<<" "<<d<<endl<<e<<" "<<f<<endl;

    swap1(a,b);
    swap1(c,d);
    swap1(e,f);
    cout<<"After Swapping: "<<a<<" "<<b<<endl<<c<<" "<<d<<endl<<e<<" "<<f<<endl;
return 0;
}
