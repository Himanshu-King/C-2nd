// Write a program to calculate the sum of digits of a 3 digit number.

#include <iostream>
using namespace std;
int main()
{
    int a,sum=0,b;
    cout<<"Enter a 3 digit number:\n";
    cin>>a;
    while(a!=0)
    {
        b=a%10;
        sum = sum +b;
        a=a/10; 
    }
    cout<<"The sum of digits are: "<<sum;
    return 0;
}