// Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;
int swap(int &a,int &b);
int main()
{
    int a,b ;
    cout << "Enter two numbers : ";
    cin>>a>>b;
    cout<<"Before swapping "<< endl;
    cout<<"a ="<<a<< ", b ="<< b<<endl;
    swap(a,b);
    cout<<"After swapping "<< endl;
    cout<<"a= "<<a<< ", b="<<b;
    return 0;
}
int swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return (a,b);
}