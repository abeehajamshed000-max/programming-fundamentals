#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your bill:";
    float bill;
    cin>>bill;
    float disc;
  if(bill<=5000){
  disc=bill*5/100;

  }
  if (bill>5000){
  disc=bill*10/100;
  }
  float pay;
  pay=bill-disc;

  cout<<"your discounted bil is:"<<pay<<endl;
  
}