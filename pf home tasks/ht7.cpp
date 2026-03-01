#include <iostream>
using namespace std;
main () {


cout <<"Enter the movie name:";
string name;
cin >>name;

cout <<"Enter the adult ticket price:";
float ad;
cin >>ad;

cout <<"Enter the child ticket price:";
float ch;
cin >>ch;

cout <<"Enter the num of adult ticket sold:";
float adsold;
cin >>adsold;

cout <<"Enter the num ofchild ticket sold:";
float chsold;
cin >>chsold;

cout <<"Enter the percentage of amount to be donated:";
float per;
cin >>per;

float amount;
amount=(ad*adsold)+(ch*chsold);

float donation;
donation=amount*(per/100);

float rem;
rem=amount-donation;

cout <<"Total amount ="<<amount<<endl;
cout <<"Donation to charity="<<donation<<endl;
cout <<"Remaining="<<rem<<endl;


}