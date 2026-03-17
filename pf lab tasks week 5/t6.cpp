#include <iostream>
using namespace std;
int main(){
  int no, digit,count=0;

  cout<<"Enter no:";
  cin >>no;

  cout<<"Enter digit :";
  cin>>digit;

  while(no >0)
  {
    int n=no%10;
    if(n ==digit)
    count++;
    no =no/10;
  }
  cout<<"FREQUENCY OF THE DIGIT IS:"<<count;
}