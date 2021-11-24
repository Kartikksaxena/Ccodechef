#include<iostream>
using namespace std;
int setBits(int n, int m, int i, int j)
{
    // number with all 1's
    int allOnes = ~0;
    cout<<"All ones "<<allOnes<<endl;
    // Set all the bits in the left of j
    int left = allOnes << (j + 1);
    cout<<"All ones left"<<(j+1)<<"    "<<left<<endl;

    // Set all the bits in the right of j
    int right = ((1 << i) - 1);
    cout<<"(l<<i)-1 "<<"   "<<i<<"    "<<right<<endl;

    // Do Bitwsie OR to get all the bits
    // set except in the range from i to j
    int mask = left | right;
    cout<<"Mask  "<<mask<<endl;

    // clear bits j through i
    int masked_n = n & mask;
    cout<<"masked _n"<<n<<"  "<<masked_n<<endl;

    // move m into the correct position
    int m_shifted = m << i;
    cout<<"m shifted by i "<<m<<"  "<<i<<"     "<<(m<<i)<<endl;

    // return the Bitwise OR of masked_n
    // and shifted_m
    return (masked_n | m_shifted);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,L,i,r,maxx=0,z;
        cin>>a>>b>>L>>r;
        cout<<setBits(a,b,L,r);
        //cout<<i<<" "<<c<<" "<<d<<" "<<c*d<<" "<<z<<" "<<maxx<<endl;
    }
    return 0;
}

