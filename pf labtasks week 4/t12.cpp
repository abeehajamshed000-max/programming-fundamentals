#include <iostream>
using namespace std;
int main (){
cout<<"Enter your bill:";
float bill;
cin >>bill;

float disc;
if(bill <= 5000){
    disc= bill-(bill*5/100);
}
if(bill > 5000){
    disc=bill-(bill*10/100);
}
cout<<"Your discounted bill is:"<<disc<<endl;

}