#include <iostream>
using namespace std;
main () {


cout <<"Enter the student name:";
string name;
cin >>name;

cout <<"Enter matric marks:";
float mat;
cin >>mat;

cout <<"Enter int marks:";
float inter;
cin >>inter;

cout <<"Enter ecat marks:";
float ecat;
cin >>ecat;

float agg;
agg=(mat/1100)*10+(inter/1200)*40+(ecat/400)*50;

cout <<"Aggregate score for"<<name<<"is"<<agg<<"%"<<endl;

}