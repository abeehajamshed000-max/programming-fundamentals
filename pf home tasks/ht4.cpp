#include <iostream>
using namespace std;
main () {


cout <<"Enter imposter count:";
float imp;
cin >>imp;

cout <<"Enter player count:";
float pl;
cin >>pl;

float chance;
chance=100*(imp/pl);

cout <<"chance of being an imposter:"<<chance<<"%"<<endl;


}