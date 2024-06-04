#include<iostream>
using namespace std;

int main()
{
	int min_no, max_no,n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	min_no= array[0];
	max_no= array[0];
	
	for(int i=0;i<n;i++)
	{
		if(min_no>array[i])
		{
			min_no=array[i];
		}
		else if(max_no<array[i])
		{
			max_no=array[i];
		}
	}
	cout<<min_no<<" & "<<max_no;
	return 0;
}
