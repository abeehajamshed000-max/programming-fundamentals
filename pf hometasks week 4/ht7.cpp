#include <iostream>
using namespace std;
int main(){
cout <<"Enter the shape";
string shape;
cin >>shape;

cout <<"Enter sides:";
float size;
cin>>size;
int area;
string square;
if(shape == "square"){
area= size*size;

cout<<"area:"<<area<<endl;
}
string rectangle;
if(shape == "rectangle"){
 cout <<"enter one side:";
 int side1;
 cin>>side1;

 cout<<"enter second side:";
 int side2;
 cin>>side2;


 area=side1*side2;

 cout<<"area:"<<area<<endl;
}


}

