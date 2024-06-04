#include<iostream>
using namespace std;

bool isprime(int n)
{
	for(int j=2;j<n;j++)
	{
		if(n%j==0)
		{
			return false;
		}
	}
	cout<<endl;
	return true;
}

int main()
{
	int a,b;
	cin>>a>>b;
	
	if(a==1)
		{
			a=2;
		}
		
	for(int i=a;i<=b;i++)
	{
		if(isprime(i)==true)
		{
			cout<<i;
		}		
	}
	cout<<endl;
	return 0;
}
