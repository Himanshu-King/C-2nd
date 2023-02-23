// Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter 5 digit number:\n";
    cin>>a;
    int b = a/10000;
    a = a/10;
    a = a % 10;
    int sum = a+b;
    cout<<"The sum of "<<b<<" and "<<a<<" are "<<sum;
    return 0;
}