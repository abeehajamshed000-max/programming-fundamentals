#include <iostream>
using namespace std;


string timeTravel(int hours, int minutes);

int main()
{
    int h, m;

    cout << "Enter Hours: ";
    cin >> h;
    cout << "Enter Minutes: ";
    cin >> m;

    cout << timeTravel(h, m) << endl;

    return 0;
}

string timeTravel(int hours, int minutes)
{
  
    minutes = minutes + 15;

    
    if (minutes >= 60)
    {
        minutes = minutes - 60;
        hours   = hours + 1;
    }

   
    if (hours >= 24)
    {
        hours = hours - 24;
    }

   
    string minuteStr;
    if (minutes < 10)
        minuteStr = "0" + to_string(minutes);
    else
        minuteStr = to_string(minutes);

    return to_string(hours) + ":" + minuteStr;
}
