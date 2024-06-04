#include<iostream>
using namespace std;

int main()
{
	int n,array[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
