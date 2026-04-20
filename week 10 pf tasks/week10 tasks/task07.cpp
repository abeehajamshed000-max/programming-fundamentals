#include <iostream>
#include <cmath>
using namespace std;
int main()
{

float height , angle , distance;

cout<<"Enter the distance: ";
cin >> distance;

cout<<"Enter the angle of elevation: ";
cin>>angle;
float radian;
radian = angle/57.2958 ;
height = distance *tan(radian);

float(ans) = tan(radian);

cout<<"The height of the tree is "<<height<<endl;




}


