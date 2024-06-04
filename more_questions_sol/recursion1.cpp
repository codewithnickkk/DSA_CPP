#include<iostream>
using namespace std;

int count=0;
int f(){
	cout<<count<<endl;
	count++;//after a certain point stack overflows which means the memory gets full and program stops
	f();//self calling, also this calling within function causes incompletion of function and creates stack space which stores the incomplete one
}

int main()
{
	f();
	return 0;
}
/*
#include<iostream>
using namespace std;

int count=0;
int f(){
	if(count>5) //base condition -->stops call function (sets limit) 
		return 0;
	cout<<count<<endl;
	count++;
	f();
}

int main()
{
	f();
	return 0;
}*/
