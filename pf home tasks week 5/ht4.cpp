#include<iostream>
using namespace std;
int main(){
    int no,digit,count=0;
    cout<<"Enter digit to find frequency:";
    cin>>digit;
    while(no>0)
    {
        int result=no%10;
        if(result==digit);
        count++;
        no=no/10;
    }
    cout<<"frequency="<<count;

}