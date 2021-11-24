#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s1;
    multiset<int>::iterator it;
    for(int i=0;i<10;i++)
        s1.insert(10-i);    //we stored values decresing but it will stored in increasing order
    for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<"\t";  //we stored values decresing but it will stored in increasing order
    it=s1.find(6);
    cout<<endl<<*it<<endl;

    //*it=8 //shows error because we cant change value in set
    s1.insert(5);//more than once 5 can be used but in sorted

    //s1.erase(it);
    for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<"\t";
return 0;
}

