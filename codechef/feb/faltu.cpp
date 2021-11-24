#include<iostream>
using namespace std;
struct book{
int id;
char a[20];
int year;
void insert(){
    cout<<"Eneter the details of book:";
    cin>>id>>a>>year;
    if(id<0){
        id=-id;
    }
}
show(){
cout<<id<<endl<<a<<endl<<year;
}
};
int main()
{
book b1,b2;
b1.insert();
b1.show();
return 0;
}
