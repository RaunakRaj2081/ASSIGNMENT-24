// Define a function to print Pascal Triangle up to N lines.

#include<iostream>
using namespace std;
int fact(int);
int comb(int , int);
int main()
{
    int n;
    cout << "Enter a number : ";
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0;j<=i;j++)
        {
          int k=0;
          if(j==0)
          while(k++ <= (n/2 - i+1))  
          cout<< " ";

            cout<<" "<<comb(i,j);
        }
        cout<<endl;
    }
    return 0;
}
int fact(int a)
{
   int fac=1;
    if(a==0 || a==1)
    return 1;
    for(int i=1;i<=a;i++)
    {
         fac=fac*i;    
    }
    return fac;
}
int comb(int n,int r)
{
    int com=fact(n)/(fact(n-r)*fact(r));
    return com;
}