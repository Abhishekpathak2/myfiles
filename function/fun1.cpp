#include <iostream>
using namespace std;

void ABCDpattern(int n)
{char c='A';
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<n-i;j++)
		{
			cout<<char(c+j);
		}
		cout<<endl;
	}
}

int factorial(int n)
{	int k=1;
for (int i =1; i <= n; ++i)
{
	k=i*k;
	
}
return k;
}

int trail(int n)
{
	int c=0;
	int d,r;

	d=factorial(n);
while (r!=0)
{
	d=d/5;
	c=c
}

cout<<c;

return 0;
}


int main()
{
	int n;
	cin>>n;
//pattern(n);
trail(n);

return 0;
}