#include <iostream>
using namespace std;
int main()
{  
    int n1=0 , n2=1 ,next;
    int n;
    cout<<" How many no of fibonacci series you want to print:";
    cin>>n;
    cout <<n1 <<",";
    cout <<n2;
    for(int x=0; x <n; x=x+1)
    {
        next = n1+n2;
        cout<<","<<next;
        n1=n2;
        n2=next;
    }
}
