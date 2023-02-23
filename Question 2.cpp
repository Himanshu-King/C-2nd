// Write a program to take the values of two variable a and b from the keyboard and then check if both conditions 'a<50' and 'a<b' are true.

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter your 1st number:\n";
    cin>>a;
    cout<<"Enter your 2nd number:\n";
    cin>>b;
    if (a<50 && a<b)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }
    return 0;
}