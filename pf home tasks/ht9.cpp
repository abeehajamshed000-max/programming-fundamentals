#include <iostream>
using namespace std;
int main () {

int num,a,b,c,d,sum;
cout <<"Enter a four digit no:";
cin >>num;

a=num%10,num/=10;
b=num%10,num/=10;
c=num%10,num/=10;
d=num%10,num/=10;


sum=a+b+c+d;

cout <<"Sum is="<<sum<<endl;


}


