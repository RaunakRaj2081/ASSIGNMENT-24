// Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.

#include<iostream>
using namespace std;
int maxm(int , int);
float maxm(float , float);
int main ()
{
    int a,b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    cout<<"The maximum number is "<<maxm(a,b)<<endl;
    float c,d;
    cout<<"Enter two numbers :"<<endl;
    cin>>c>>d;
    cout<<"The maximum number is "<<maxm(c,d);
    return 0;
}
int maxm(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}
float maxm(float c,float d)
{
 if(c>d)
    return c;
    else
    return d;   
}

