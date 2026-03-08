#include<iostream>
using namespace std;
int main (){
cout<<"Enter countryname:";
string name;
cin >>name;

cout<<"Enter ticket price in dollars:";
float ticket;
cin >>ticket;

float disc,final;
if(name ==  "ireland"){

    disc=ticket*5/100.0;
    


}
else{
    disc=ticket*10/100.0;
}

final=ticket-disc;
cout<<"Discounted price="<<final<<endl;

}