// Write a program to check wheather two number (entered by user) are equal or not.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    bool flag;
    cout << "Enter your 1st number:\n";
    cin >> a;
    cout << "Enter your 2nd number:\n";
    cin >> b;
    if(a==b)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    cout<<flag;
    return 0;
}