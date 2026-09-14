#include<iostream>
using namespace std;
int main()
{
    int y=4, x=4;
    y=++x;
    x=x++ + ++y;
    cout<<x<<" "<<y;
    return 0;
}