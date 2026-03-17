#include <iostream>
using namespace std;
int main(){
    
    int n1=0,n2=1,next;
    
cout <<"Enter the lengt of the finonacci series:";
int n;
cin >>n;
cout<<n1<<",";
cout<<n2;

    
    for(int x=0; x <n; x=x+1)
   {
    next= n1+n2;
    cout<<","<<next;
    n1=n2;
    n2=next;
    }
    return 0;
}