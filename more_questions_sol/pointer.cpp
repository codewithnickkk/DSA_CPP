#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *aptr;
    aptr = &a;//&a is the address of "a";

    cout<<a<<" "<<&a<<endl;
    cout<<aptr<<" "<<*aptr<<endl;

    *aptr = 20;
    cout<<*aptr;

    return 0;
}