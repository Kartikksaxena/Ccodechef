#include<iostream>
using namespace std;
template <class typeT>
class Stack
{
 typeT a[100];
 int top;       //top must be integer it can't be set as typeT
 public:
     Stack()
     {
         top=-1;
     }
     void push(typeT var)
     {
         if(top==99)
            cout<<"Stack is Full."<<endl;
         else
         {
            a[++top]=var;
            cout<<var<<"is placed in stack at "<<top<<endl;
         }
     }
     typeT pop()
     {
         typeT var;
         if(top==-1)
            cout<<"Stack is Empty."<<endl;
         else
         {
             var=a[top];
             cout<<var<<"is placed out from stack["<<top<<"]"<<endl;
             top--;
         }
    return var;
     }
};
int main()
{
    Stack <int> Sint;
    Sint.push(29);
    Sint.push(349);
    Sint.push(233);

    cout<<"1st pop value is: "<<Sint.pop()<<endl;
    cout<<"2nd pop value is: "<<Sint.pop()<<endl;
    cout<<"3rd pop value is: "<<Sint.pop()<<endl;
return 0;
}
