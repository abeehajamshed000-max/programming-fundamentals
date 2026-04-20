#include <iostream>
#include <cmath>
using namespace std;
int main()
{
     double a,b,c;
    cout <<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
     cout<<"Enter the value of c: ";
     cin>>c;
     double d = b*b -4*a*c;
     if( d > 0){

        double root1  = -b + sqrt((d)/(2*a));
        double root2  = -b - sqrt((d)/(2*a));
        cout<< "Two real roots" <<" "<<root1<<"and" <<root2;
     }
        else if( d == 0){

            double root = -b/2*a;
            cout<<"one real root"<<""<<root;

        }
        else{
            double real = -b /2*a;
            double imaginary= sqrt((-d)/(2*a));
            
            
        
            cout<<"Complex roots:" <<"x = "<< real<<" +"<<imaginary <<"i ";

            return 0;
            

        }


return 0;


    }


