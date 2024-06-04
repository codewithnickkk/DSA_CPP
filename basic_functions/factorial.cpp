#include<iostream>
using namespace std;

int factorial(int n)
{
	int fac=1;
	for(int i=1;i<=n;i++)
	{
			fac*=i;
	}
	return fac;
}

int main()
{
	int n;
	cin>>n;
	int ans=factorial(n);
	cout<<ans;
	return 0;
}
