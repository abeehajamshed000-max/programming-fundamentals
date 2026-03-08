#include <iostream>
using namespace std;
int main(){
int salary;
salary=10000;

float laptop;
laptop=50000;

float advancemonths;
advancemonths=6;

float monthlyadvance;
monthlyadvance=salary*50/100;

float nadvance;
nadvance=advancemonths*monthlyadvance;

if(nadvance >= laptop){

    cout<<"Ali can buy the laptop";
} 
    int monthsrequired;
monthsrequired=laptop/monthlyadvance;

cout<<"Months required to buy the laptop:" <<monthsrequired<<endl;
}