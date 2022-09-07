// Define a function to check whether a given number is a Prime number or not.

#include<iostream>
using namespace std;
void prime(int);
int main()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
prime(a);
return 0;
}
void prime(int a)
{
    int count=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
         count++;
    }
        if(count==2)
        cout<<a<< " is a prime number";
        else
        cout<<a<<" is not a prime number";
    }
