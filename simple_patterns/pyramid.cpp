#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = (n - 1); i >= 0; i--)||(int i=0;i<n;i++)
	{
        for (int j = 0; j < (n-1); j++) {
        	
            if (j <= i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl; 
    }
    
}
