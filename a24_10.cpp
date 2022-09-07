// Write functions using function overloading to add two numbers having different data types

#include<iostream>
using namespace std;
int add(int a, int b );
float add(int c, float d);
float add(float e, float f);
int main()
{
    int a,b,c;
    float d,e,f;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"The sum is "<<add(a,b)<<endl;
    cout<<"Enter two numbers : ";
    cin>>c>>d;
    cout<<"The sum is "<<add(c,d)<<endl;
    cout<<"Enter two numbers : ";
    cin>>e>>f;
    cout<<"The sum is "<<add(e,f)<<endl;
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
float add(int c,float d)
{
    return c+d;
}
float add(float e,float f)
{
    return e+f;
}