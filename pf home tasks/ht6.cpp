#include <iostream>
using namespace std;
main () {



cout <<"Enter the size of the fertilizer bag:";
int bag;
cin >>bag;

cout <<"Enter the cost of the bag:";
float cost;
cin >>cost;

cout <<"Enter the area:";
float area;
cin >>area;

float perpound;
perpound=cost/bag;

float sqft;
sqft=cost/area;

cout <<"Cost of fertilizer per pound:"<<perpound<<endl;
cout <<"Cost of fertilizing per square foot:"<<sqft<<endl;

}