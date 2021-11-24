#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> li1{22,45,56,22,34,78,11};
    list <string> li2{"Pakistan","India","China","U.S.","Germany","Switzerland"};

 //   cout<<li1[2];   //we cant use subscription operator  in list
    cout<<"we use iteraor for list traversing"<<endl;
    list <int> :: iterator p1=li1.begin()  ;
    while(p1!= li1.end())
    {
        cout<<*p1<<" ";
        p1++;
    }

    cout<<"Size of li1 Is :"<<li1.size()<<endl;

    li1.push_back(50);
    li1.push_front(100);
    list <int> :: iterator p2=li1.begin()  ;
    while(p2!= li1.end())
    {
        cout<<*p2<<" ";
        p2++;
    }
    cout<<"Size of li1 Is :"<<li1.size()<<endl;

    li2.pop_front();
    li2.pop_back();
    list <string> :: iterator p3;
    for(p3=li2.begin();p3!=li2.end();p3++)
        cout<<*p3<<" ";

     li1.reverse();  //reversing the list
     cout<<"\nAfter reversing list will be: \n";
     list <int> :: iterator p5=li1.begin()  ;
    while(p5!= li1.end())
    {
        cout<<*p5<<" ";
        p5++;
    }

    li1.sort();
    cout<<"\nSorted list is\n";
    list <int> :: iterator p4=li1.begin()  ;
    while(p4!= li1.end())
    {
        cout<<*p4<<" ";
        p4++;
    }

    li1.remove(22);
    cout<<"\nremove all 22 value elements in list \n";
    list <int> :: iterator p6=li1.begin()  ;
    while(p6!= li1.end())
    {
        cout<<*p6<<" ";
        p6++;
    }

    li1.clear();  //remove all the element in list

return 0;
}
