#include<iostream>
using namespace std;
int extra(int y)
{
    int l=0,m,x;
    x=y%400;
    if(x>=300)
        l+=75;
    else if(x>=200)
        l+=50;
    else if(x>=100)
        l+=25;
    else
        l+=0;
return l;
}
int odd(int m){
      int i,j,y,odd=0;
      y=m+1;
      i=m%400;
      j=i/100;
      cout<<y<<" "<<i<<" "<<j<<" ";
      if(j==3)
        odd+=1;
      else if(j==2)
        odd+=3;
      else if(j==1)
        odd+=5;
      else
        odd+=0;
      odd=(odd + (i%100) + (i%100)/4)%7;
      cout<<odd<<" ";
      if(odd == 2)
      {
          cout<<y<<" "<<endl;
          return 1;
      }
      if(odd==3 && ( (((y%100)==0)&&((y%400)!=0)) || ((y%4)!=0) ))
      {
          cout<<y<<" "<<endl;
          return 1;
      }
return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m1,m2,y1,y2,i,j,s,k=0;
        cin>>m1>>y1;
        cin>>m2>>y2;
        if(m1<=2)
            y1--;
        if(m2<2)
            y2--;
        i=y1/400;
        j=y2/400;
        cout<<y1<<" "<<y2<<" "<<i<<" "<<j<<" ";
        if(i!=j)
        {
            k+=(j-i-1)*101;
        }
        cout<<k<<" "<<<<extra(y2)<<" "<<extra(y1)<<" ";
            k+=(extra(y2)-extra(y1));
            cout<<k<<" ";
            for((s=(y1/100)*100 );s<=y1;s++)
                k-=odd(s);
            cout<<k<<" ";
            for((s=(y2/100)*100);s<=y2;s++)
                k+=odd(s);

        cout<<k<<endl;
    }
return 0;
}
