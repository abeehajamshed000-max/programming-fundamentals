#include <iostream>

#include <iomanip>

using namespace std;


string calculatePoolState(int V, int P1, int P2, double H);

int main()
{
    int V, P1, P2;
    double H;

    cout << "Enter volume of the pool in liters: ";
    cin >> V;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> P1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> P2;
    cout << "Enter hours that the worker is absent: ";
    cin >> H;

    cout << calculatePoolState(V, P1, P2, H) << endl;

    return 0;
}

string calculatePoolState(int V, int P1, int P2, double H)
{
  
    double totalWater = (P1 + P2) * H;

 
    if (totalWater <= V)
    {
       

      
        int poolPercent  = (int)(totalWater / V * 100);

    
        int pipe1Percent = (int)((P1 * H) / totalWater * 100);
        int pipe2Percent = (int)((P2 * H) / totalWater * 100);

        return "The pool is "  + to_string(poolPercent)  + "% full. "
             + "Pipe 1: "      + to_string(pipe1Percent) + "%. "
             + "Pipe 2: "      + to_string(pipe2Percent) + "%.";
    }
    else
    {
     

        double overflow = totalWater - V;

        
        string hStr;
        if (H == (int)H)
            hStr = to_string((int)H);
        else
        {
            ostringstream oss;
            oss << fixed << setprecision(1) << H;
            hStr = oss.str();
        }
        ostringstream oss;
        oss << fixed << setprecision(0) << overflow;

        return "For " + hStr + " hours, the pool overflows with "
               + oss.str() + " liters.";
    }
}
