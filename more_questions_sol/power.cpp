#include<iostream>
using namespace std;

int power(int n, int p)
{
    if(p == 0)
    {
        return 0;
    }
    int prevpow = power(n , p-1);
    return (n*n);
}

int main()
{
    int n, p;
    cin>>n>>p;
     
     cout<<power(n, p);
     return 0;
}