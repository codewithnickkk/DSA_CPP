#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter value to reverse:";
	cin>>n;
	int reversedigit=0;
	while(n>0)
	{
		int lastdigit = n%10;
		reversedigit = reversedigit*10 + lastdigit;
		n = n/10;
	}
	cout<<reversedigit;
	return 0;
}
