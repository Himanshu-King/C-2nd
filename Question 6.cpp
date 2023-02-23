// Design a calculator to perform basic arithmetic operations(+,-,/,*,%)

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter your 1st number:\n";
    cin>>a;
    cout<<"Enter your 2nd number:\n";
    cin>>b;
    cout<<"Sum = "<<a+b<<endl;
    cout<<"Difference = "<<a-b<<endl;
    cout<<"Product = "<<a*b<<endl;
    cout<<"Division = "<<a/b<<endl;
    cout<<"Modulo = "<<a%b<<endl;
    return 0;
}