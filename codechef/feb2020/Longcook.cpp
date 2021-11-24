#include<iostream>
using namespace std;
int odd(int y)
{
    int l=0,m,x;
    x=y%400;
    if(x>=300)
        l+=76;
    else if(x>=200)
        l+=51;
    else if(x>=100)
        l+=26;
    else
        l+=0;
    m=(y/100)*100;
    cout<<m<<" ";
    while(m<=y)
    {
      int i,j,odd=0;
      i=m%400;
      j=i/100;
      if(j==3)
        odd+=1;
      else if(j==2)
        odd+=3;
      else if(j==1)
        odd+=5;
      else
        odd+=0;
      odd=odd + (i/100) + (i/100)/4;
      if(odd == 2)
      {
          l++;
          cout<<m<<" "<<odd<<" ";
      }
      if(odd==3 && ( (((y%100)==0)&&((y%400)!=0)) || ((y%4)!=0) ))
      {
          l++;
          cout<<m<<" "<<odd<<" ";
      }
      m++;
    }
return l;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m1,m2,y1,y2,i,j,k=0;
        cin>>m1>>y1;
        cin>>m2>>y2;
        if(m1>2)
            y1++;
        if(m2<2)
            y2--;
        i=y1/400;
        j=y2/400;
        cout<<y1<<" "<<y2<<" "<<i<<" "<<j<<" ";
        k=(j-i)*102;
        k+=odd(y1);
        k+=odd(y2);
        cout<<k<<endl;
    }
return 0;
}
