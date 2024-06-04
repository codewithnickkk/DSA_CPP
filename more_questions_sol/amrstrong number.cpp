#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int number=n;
    int Addition = 0;
    while(n>0)
    {
    	int lastdigit = n%10;
    	int cube = pow(lastdigit,3);
    	Addition = Addition + cube;
    	n=n/10;
	}
	if(number==Addition)
	{
		cout<<"It is a armstrong number";
	}
	else{
		cout<<"Not an armstrong number";
	}
	return 0;
}
