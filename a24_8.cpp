// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include<iostream>
using namespace std;
float area(int);
int area(int , int );
float area(float , float);
int main()
{
    int r,l,b;
    float p,q;
    cout<<"enter the radius of circle :";
    cin>>r;
    cout << "The area of circle is "<<area(r)<<endl;
    cout<<"Enter the length and breadth of rectangle :"<<endl;
    cin>>l>>b;
    cout << "The area of rectangle is "<<area(l,b)<<endl;
    cout <<"Enter the base and hypotenuse of triangle :"<<endl;
    cin>>p>>q;
    cout << "The area of triangle is "<<area(p,q)<<endl;
    return 0;
}
float area(int r)
{
    return (3.14)*r*r;
}
int area(int l, int b)
{
    return l*b;
}
float area(float p,float q)
{
    return 0.5*p*q;
}


