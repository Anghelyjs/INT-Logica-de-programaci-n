#include<iostream>
using namespace std;
int main ()
{
    int x=10,y=4;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y;
    return 0;
}
