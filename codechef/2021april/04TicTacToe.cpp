#include <bits/stdc++.h>
using namespace std;

int TicTAcToe(char array[3][3])
{
    int count = 0,count_x=0,count_o=0,count_=0;
    for(int i = 0; i < 3; i++)
    {
        if (array[i][0] == array[i][1] && array[i][1] == array[i][2] && array[i][0]!= '_')
            count++;
    }
    for(int i = 0; i < 3; i++)
    {
        if (array[0][i] == array[1][i] && array[1][i] == array[2][i] && array[0][i]!= '_')
            count++;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(array[i][j]=='X')
                count_x++;
            else if (array[i][j]=='O')
                count_o++;
            else
                count_++;
        }
    }
    if(array[0][0]==array[1][1] && array[1][1]==array[2][2])
        count++;
    if(array[2][0]==array[1][1] && array[1][1]==array[2][0])
        count++;
    if(count_x==count_o || count_o==count_x+1 || count_x==count_o+1)
    {
        if(count>1)
            return 3;
        else if(count==1 )
            return 1;
        if(count_x+count_o==9)
            return 1;
        else
            return 2;
    }
    else
        return 3;
    return 5;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin>>a[i][j];    
        cout<<TicTAcToe(a)<<endl;
    }
    return 0;
}
