#include <iostream>
using namespace std;
int main(){
    int number;
    if( number ==0){
        return 1;

    }
    if(number<0){
        number=-number;
    }
    int count=0;
    while(number>0){
        number%10;
        number=number/10;
        count++;
    }
    int input;
    cout<<"Enter a number:";
    cin>>input;

    int result=input;
    cout<<"Total number of digits:"<<result<<endl;
}