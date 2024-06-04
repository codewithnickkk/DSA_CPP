#include<iostream>
using namespace std;

int clearbit(int n, int pos)
{
    int mask = ~(1<<pos);//~()used to complement 2-> 0010 -> 1101
    return (n & mask);
}

int main()
{
    cout<<clearbit(5,2);
    return 0;
}