#include<iostream>
using namespace std;

int main()
{
	int n,m,o;
	cout<<"enter rows/columns for first matrix: ";
	cin>>n;
	cout<<"enter rows/columns for second matrix: ";
	cin>>o;
	cout<<"enter common row/column: ";
	cin>>m;
	
	int a[n][m];
	int b[m][o];
	int c[n][o];
	
	cout<<"enter elements of first matrix: ";
	
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
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"enter elements of second matrix: ";
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<o;j++)
		{
			cin>>b[i][j];
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<o;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	//initializing c wala with zero
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<o;j++)
		{
			c[i][j]=0;
		}
	}
	
	//mulitipilication
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<o;j++)
		{
			for(int k=0;k<m;k++)
			{
				c[i][j] += a[i][k]*b[i][k];
			}
		}
	} 
	//op
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<o;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	} 
	
}
