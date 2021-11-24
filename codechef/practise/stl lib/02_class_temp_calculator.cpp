#include<iostream>
using namespace std;

template <class T>
class Calculator
{
    T num1,num2;
public:
    Calculator(T n1,T n2)               //Constructor
    {
        num1=n1;
        num2=n2;
    }
    void displayResult()
    {
        cout<<"Operands are : "<<num1<<" "<<num2<<endl;
        cout<<"Addition is : "<<add()<<endl;
        cout<<"Substract is : "<<sub()<<endl;
        cout<<"Multiply is : "<<multiply()<<endl;
        cout<<"Dividde is : "<<divide()<<endl;
    }
    T add()
    {
        return (num1+num2);
    }
    T sub()
    {
        return (num1-num2);
    }
    T multiply()
    {
        return (num1*num2);
    }
    T divide()
    {
        return (num1/num2);
    }
};
int main()
{
    Calculator<int> CalcInt(10,20);
    cout<<"Int Calculator: ";
    CalcInt.displayResult();

    Calculator<float> Calcfloat(17.8,46.7);
    cout<<"Float Calculator: ";
    Calcfloat.displayResult();

    Calculator<char> CalcChar('O','D');
    cout<<"Char Calculator: ";
    CalcChar.displayResult();

return 0;
}
