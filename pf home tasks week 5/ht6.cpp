#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two numbers:";
    cin>>a;
    cin>>b;

    int x=a,y=b;
    while(y!=0)
    {
        temp=y;
        y=x%y;
        x=temp;

    }
    int gcd=x;
    int lcm=(a*b)/gcd;

    cout<<"gcd:"<<gcd;
    cout<<"lcm"<<lcm;
}