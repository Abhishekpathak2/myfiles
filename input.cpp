#include<iostream>
using namespace std;

int main()
{
int sum=0;;
	int n;
	while(n!=0)
	{	cin>>n;
		sum+=n;
		if(sum>0)
		{
			cout<<n;
		}
		else
		{
			return 0;
		}
		

	}


	return 0;
}