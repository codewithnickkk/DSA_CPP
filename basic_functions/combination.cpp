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
	int n,r;
	cin>>n>>r;
	int ans=factorial(n)/factorial(r)*factorial(n-r);
	cout<<ans<<endl;
	return 0;
}
