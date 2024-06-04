#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();
	char a[n+1];
	cin.getline(a, n);
	cin.ignore();
	cout<<a;
	return 0;	
}
