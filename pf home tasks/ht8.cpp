#include <iostream>
using namespace std;
main () {



cout <<"Enter the vegetable price:";
float veg;
cin >>veg;

cout <<"Enter fruit price:";
float fr;
cin >>fr;

cout <<"total kg of vegetables:";
float tveg;
cin >>tveg;

cout <<"total kg of fruits:";
float tfr;
cin >>tfr;

float earnings;
earnings=(veg*tveg)+(fr*tfr);

float rp;
rp=earnings/1.94;

cout <<"Total earnings in rp:"<<rp<<endl;

}