#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v1{10,20,30,40,50,60,70};
    vector <char> v2(5); //Capacity of v2 is 5
    vector <int> v3(5,10); //capacity is 5 and all elements are 10
    vector <string> v4(3,"Welcome");  //capacity is 3 and all elements are Welcome

    cout<<"Current Capacity is= "<<v1.capacity()<<endl;

    //[] subscript operator
    cout<<v4[0]<<endl;
    cout<<v4[1]<<endl;
    cout<<v4[2]<<endl;
    /*cout<<v4[3]<<endl;      it will not show error but block implementation of rest program*/

    for(int i=0;i<=4;i++)
    {
        cout<<v1[i]<<"  "<<v3[i]<<endl;
    }

    //push_back() function to insert value at last
    v1.push_back(60);
    v1.push_back(70);
    v1.push_back(80);
    v1.push_back(90);

    for(int i=0;i<=7;i++)
    {
        cout<<v1[i]<<endl;
    }
    /*for(int i=0;i<=4;i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<" "<<v4[i]<<endl;
    }*/
    vector <int> v5;
    for(int i=0;i<=9;i++)
    {
        v5.push_back(10*(i+1));
        cout<<v5.capacity()<<" ";  //see it sincerely
    }
cout<<endl;
    //capacity to check  capacity would not decrease
    v5.pop_back();
    cout<<"Current Capacity and size is= "<<v5.capacity()<<" "<<v5.size()<<endl;
    v5.pop_back();
    cout<<"Current Capacity and size is= "<<v5.capacity()<<" "<<v5.size()<<endl;
    //size()  current no of elements

    //clear()  remove all elements in vector
    v5.clear();
    cout<<"Current Capacity and size is= "<<v5.capacity()<<" "<<v5.size()<<endl;

    cout<<v3.at(2)<<endl;

    //front() and back() used to get the first and last  value in vector
    vector <int> v6{11,22,33,44,5,66};
    cout<<"First value is: "<<v6.front()<<endl;
    cout<<"last value is: "<<v6.back()<<endl;

    //iterator
    cout<<endl;
    vector <int> :: iterator it =v6.begin();
    v6.insert(it+3,35);  //place 35 after 33
    for(int i=0;i<v6.size();i++)
        cout<<v6[i]<<endl;
    vector <int> :: iterator it1;
    for(it1 = v6.begin(); it1 != v6.end(); ++it1)
        cout<< *it1<< '\t';
return 0;
}
