#include <iostream>
using namespace std;
main () {


cout <<"Enter the current world population:";
float pop;
cin >>pop;

cout <<"Enter the monthly birth rate:";
float birth;
cin >>birth;

float result;
result=pop+(birth*360);

cout <<"Population in three decades will be:"<<result<<endl;


}
