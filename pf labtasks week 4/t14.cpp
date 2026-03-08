#include <iostream>
using namespace std;
int main() {

cout <<"Enter first no:";
int no1;
cin >>no1;

cout <<"Enter the operator:";
char op;
cin >>op;

cout <<"Enter second no:";
int no2;
cin >>no2;

if(op =='+'){
    cout<<no1<<"+"<<no2<<"="<<no1+no2<<endl;

}
if(op =='-'){
    cout<<no2<<"-"<<no1<<"="<<no2-no1<<endl;

}
if(op =='*'){
    cout<<no1<<"*"<<no2<<"="<<no1*no2<<endl;

}
if(op =='/'){
    cout<<no2<<"/"<<no1<<"="<<no2/no1<<endl;
}
}