#include <iostream>
using namespace std;
main () {


cout <<"Enter initial velocity:";
float vi;
cin >>vi;

cout <<"Enter acceleration:";
float acc;
cin >>acc;

cout <<"Enter time:";
float time;
cin >>time;


float vf;
vf=vi+acc*time;

cout <<"Final velocity="<<vf<<endl;


}