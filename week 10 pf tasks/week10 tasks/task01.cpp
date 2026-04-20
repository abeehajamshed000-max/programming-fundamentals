#include<iostream>
using namespace std;
int add(int num1, int num2);
int main()
{
 int num1, num2;
 

 cout <<"Enter number01: ";
 cin>>num1;
 cout <<"Enter number02: ";
 cin >>num2;
 add(num1, num2);

 return 0;

}

int add(int num1, int num2)
{
    cout <<" sum: "<<num1 +num2; 
    return num1 + num2;
} 
