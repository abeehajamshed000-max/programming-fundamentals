#include <iostream>
using namespace std;
main () {

cout <<"Enter imposters:";
int imp;
cin >>imp;

cout <<"Enter players:";
int pl;
cin >>pl;

float chance;
chance=100*(imp/pl);

cout <<"Chance="<<chance<<"%"<<endl;


}