#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    int num = 1001; // Start checking from 1001
    while (counter < 100)
    {
        bool prime = true; // Reset prime flag for each number
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                prime = false; // If divisible by any number other than 1 and itself, not prime
                break; // No need to continue checking
            }
        }
        if (prime)
        {
            cout << num << endl;
            counter++;
        }
        num++; // Check the next number
    }    
	return 0;
}

#include <iostream>
using namespace std;
bool prime = true;
int main()
{
	int counter=0;
	while(counter<=100)
	{
		int op;
		for(int i=1000;counter<100;i++)
		{
			for(int j=2;j<i;j++)
			{
				if(i%j==0)
				{
					prime=false;
				}
				else{
					op=i;
				}
			}
			
		}
		if(prime==true)
		{
			cout<<op<<endl;
			counter++;
		}
	}
	return 0;
}
