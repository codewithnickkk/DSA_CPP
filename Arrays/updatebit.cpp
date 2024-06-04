/*#include<iostream>
using namespace std;

int updatebit(int n, int pos, int value)
    {
        int mask = ~(1<<pos);
        n = n & mask;
        return (n | (value<<pos));
    }

int main()
{
    cout<<updatebit(6,2,0);
    return 0;
}*/

#include<iostream>
using namespace std;

int power2(int n, int pos=0)
{
    int mask = ~(1<<pos);
    return (n & mask);
}

int main()
{
    cout<<power2(5);
    return 0;
}
