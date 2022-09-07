// Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;
int highestDigit(int);
int main()
{
    int p;
    cout<<"Enter a number : ";
    cin>>p;
    cout<<"Highest value digit in "<<p<<" is "<<highestDigit(p);
    return 0;
}
int highestDigit(int p)
{
int max=-1;
while(p)
{
    if(max<p%10)
    max=p%10;
    p=p/10;
}
return max;
}
