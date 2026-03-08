#include<iostream>
using namespace std;
int main(){

    cout<<"Enter the no of red rosses:";
    int no1;
    cin>>no1;

    cout<<"Enter the no of white rose:";
    int no2;
    cin>>no2;

    cout<<"Enter the no of tulips:";
    int no3;
    cin>>no3;
    cout <<"Price of red rosses:";
    float p1;
    cin>>p1;

    cout<<"Price of white rosses:";
    float p2;
    cin>>p2;

    cout<<"Price of tulips";
    float p3;
    cin>>p3;

    float total;
    total=(no1*p1)+(no2*p2)+(no3*p3);
     
    float disc;
    if(total > 200){
        disc=total*0.2;
    }
     float after;
     after=total-disc;
    cout<<"original price="<<total<<endl;
    cout<<"Price after discount="<<after<<endl;
    

}