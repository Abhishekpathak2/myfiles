#include<iostream>

using namespace std;

int main()
{

	int min=10000000;
	int max=-1000000;
	int A[]={2,5,8,1,0,9};
	for (int i = 0; i < 6; ++i)
	{
		if (A[i]<min)
		{min=A[i];
		}
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	cout<<"max:"<<max<<endl;
	cout<<"min"<<min<<endl;
	return 0;
}