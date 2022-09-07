// Define a function to check whether a given number is a term in a Fibonacci series or not.

#include<iostream>
using namespace std;
int fib(int);
int main()
{
    int a,b=0;
    cout << "Enter a number : ";
    cin>>a;
    for(int p=1;  ; p++)
    {
        int num=fib(p);
        if(a==num)
        {
        b=1;
        break;
        }
        if(num>a)
        break;
    }
        if(b==1)
        cout<< a<<" is term of fibonacci series ";
        else
        cout<< a<<" is not term of fibonacci series ";
    return 0;
}
int fib(int n)
{
    int value=1;
    if (n<=2)
    return 1;
    for(int i=3;i<=n;i++)
    {
    value =fib(n-1)+fib(n-2);
}
return value;
}
