#include <iostream>
using namespace std;
bool prime = true;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
        }
    }
    if (prime == true)
    {
        cout << " is a prime number";
    }
    else
    {
        cout << "is not a prime number";
    }
    return 0;
}