#include<iostream>
using namespace std;
int main(){

cout<<"Temperature city 1:";
int temp1;
cin>>temp1;

cout<<"Temperature city 2:";
int temp2;
cin>>temp2;

int final;
final=temp1-temp2;

if(final > 10){
    cout<<"Difference is too big";
}
else{
    cout<<"PROGRAM ENDS";
}
}