#include<iostream>
using namespace std;

int main()
{
	int min_no,max_no,n;
	cin>>n;
	int array[n];
		for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	min_no=INT_MAX;
	max_no=INT_MIN;
	for(int i=0;i<n;i++)
	{
		min_no=min(min_no,array[i]);
		max_no=max(max_no,array[i]);
	}
	cout<<"min:"<<min_no<<" & "<<"max:"<<max_no;
	
	return 0;
}
