#include<iostream>
using namespace std;

int main()
{
	bool palindrone=true;
	//check for palindrone
	int n;
	cin>>n;
	char a[n];
	cin>>a;
	for(int i=0;i<n;i++)
	{
		if(a[i] != a[n-1-i])
		{
			palindrone=false;
		}
	}
	if(palindrone == true)
	{
		cout<<"Given is a palindrone";
	}
	else
	{
		cout<<"Given is not a palindrone";
	}
	return 0;
}
