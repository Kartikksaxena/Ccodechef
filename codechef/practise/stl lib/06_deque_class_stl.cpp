#include<iostream>
#include<deque>
using namespace std;

int main()
{
    int ch;
    deque <int> dq;
    deque <int>::iterator it;
while(1)
{
    int var;
    cout<<"\n******************************\nDeque implementation in stl :\n\n******************************";
    cout<<"\n1. Insert Element at the End\n";
    cout<<"2. Insert Element at the front\n";
    cout<<"3. Delete Element at the End\n";
    cout<<"4. Delete Element at the front\n";
    cout<<"5. Front Element at the Deque\n";
    cout<<"6. Last Element at the Deque\n";
    cout<<"7. Size of the Deque\n";
    cout<<"8. Display deque\n";
    cout<<"9. Exit\nEnter your Choice : ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"Enter the Element you want to insert at the end: ";
            cin>>var;
            dq.push_back(var);
            break;
        case 2:
            cout<<"Enter the Element you want to insert at begin: ";
            cin>>var;
            dq.push_front(var);
            break;
        case 3:
            var=dq.back();
            dq.pop_back();
            cout<<var<<" Element is pop up from deque";
            break;

        case 4:
            var=dq.front();
            dq.pop_front();
            cout<<var<<" Element is pop up from deque";
            break;

        case 5:
            var=dq.front();
            cout<<var<<" Element is first element of deque";
            break;

        case 6:
            var=dq.back();
            cout<<var<<" Element is last element of deque";
            break;

        case 7:
            cout<<dq.size()<<" is the size of deque";
            break;

        case 8:
            for(it=dq.begin();it!=dq.end();it++)
                cout<<*it<<"\t";
            break;

        case 9:
            exit(1);
        default:
            cout<<"You enter wrong choice";
    }
}
return 0;
}
