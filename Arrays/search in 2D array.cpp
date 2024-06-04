#include<iostream>
using namespace std;

int main()
{
	int n,m,x;
	bool found=false;
	cout<<"enter row and column:";
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
	cout<<endl<<"search an element in the matrix:";
	cin>>x;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==x)
			{
				found=true;
				cout<<"coordinates of element:"<<i<<" "<<j<<endl;
			}
		}
	}
	if(found==false)
	{
		cout<<"element not found";
	}
	return 0;
	
	
}
