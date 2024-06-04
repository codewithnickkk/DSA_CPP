#include<iostream>
using namespace std;

int prev=0;
int add(int n)
{
	for(int i=1;i<=n;i++)
	{
		prev=prev+i;
	}
	return prev;
}

int main()
{
	int n;
	cout<<"enter value of N:";
	cin>>n;
	int ans = add(n);
	cout<<ans;
	return 0;
}
