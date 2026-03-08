#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the no of holidays:";
    int holidays;
    cin >>holidays;
    int workingdays;
    workingdays=365-holidays;

    int timeforgames;
    timeforgames=345*63+holidays*127;

    float norm;
    norm=30000-timeforgames;

    if(timeforgames <30000){
        cout<<"Tom sleeps well";
    }
    else{
        cout<<"Tom will run away";
    }
    cout<<norm<<"for play";
}