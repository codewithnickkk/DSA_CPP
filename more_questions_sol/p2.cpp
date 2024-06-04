#include<iostream>
using namespace std;

int main()
{
    int a = 100;
    int *aptr = &a;

    cout<<aptr<<endl;

    *aptr++;

    cout<<aptr<<endl;
    cout<<*aptr<<endl;
}