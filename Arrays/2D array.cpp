#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cout<<"enter number of rows and columns";
	cin>>n>>m;
	cout<<"enter elements";
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			{
				cout<<a[i][j];
			}
		cout<<endl;
	}
	
	//transpose
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			{
				cout<<a[j][i];
			}
		cout<<endl;
	}
}
