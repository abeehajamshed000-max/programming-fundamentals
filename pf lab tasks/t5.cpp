#include <iostream>
using namespace std;
main () {



cout <<"Enter the charge in coulombs:";
float charge;
cin >>charge;


cout <<"Enter the time :";
float time;
cin >>time;

float current;
current=charge/time;

cout <<"The current is :"<<current<<"amperes"<<endl;

}