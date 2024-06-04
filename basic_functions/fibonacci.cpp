#include<iostream>
using namespace std;

int t1=0,t2=1,next=0;
void fibonacci(int num)
{
	for(int i=1;i<=num;i++)
	{
		cout<<t1<<endl;
		next=t1+t2;
		t1=t2;
		t2=next;
	}
	return;
}

int main()
{
	int number;
	cin>>number;
	fibonacci(number);
	return 0;
	
}
