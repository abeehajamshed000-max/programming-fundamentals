#include <iostream>
using namespace std;
main ()
{
    int value;
    cout <<"Please enter a positive no:";
    cin>>value;
    while(value <=0)
    {
        cout<<"Error:"<<value<<"is not a positive no."<<endl;
        cout<<"Please enter a positive no:";
        cin>>value;
    }
    cout <<"Program ends"<<endl;
}