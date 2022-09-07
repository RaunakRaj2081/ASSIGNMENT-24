// Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;
int power(int , int);
int main()
{
    int x,y;
    cout << "Enter two numbers : ";
    cin>>x>>y;
    cout<<x<<" raised to power "<<y << " is "<<power(x,y);
    return 0;
}
int power(int x,int y)
{
   int mul=1;
    for(int i=0;i<y;i++)
    mul=mul*x;
    return mul;
}