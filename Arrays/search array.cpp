#include<iostream>
using namespace std;

int main()
{
	int n, m;
	cout<<"enter size of array:";
	cin>>n;
	int arr[n];
	cout<<"elements:";
	 for(int i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 }
	 cout<<"enter element to find:";
	 cin>>m;
	 for(int i=0;i<n;i++)
	 {
	 	if(m==arr[i])
	 	{
	 		cout<<"At index:"<<i;
		}
		else
		{
			cout<<"No element found...";
			return 0;
		}
	 }
	return 0;
}
