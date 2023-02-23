// There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls recieved grades "A" if 17 boys made up 80% of the students that recieved grades "A".

#include <iostream>
using namespace std;
int main()
{
    int a = 45;
    int b = 0.8*a;
    a = b - 17;
    cout<<"No. of girls who obtainbed A grade are: "<<a;
    return 0; 
}