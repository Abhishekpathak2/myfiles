#include<iostream>
#include<climits>
using namespace std;


int main()
{
	int x=8;
	bool y=5;
	char z='A';
	double c=89.0235;
	float v=89.21;int a,b;
	long int d=25;
unsigned int h=7;
cout<<"int size"<<sizeof(x)<<endl;
cout<<"bool size"<<sizeof(y)<<endl;
cout<<"char size"<<sizeof(z)<<endl;
cout<<"double size"<<sizeof(c)<<endl;
cout<<"float size"<<sizeof(v)<<endl;
cout<<" long int size"<<sizeof(d)<<endl;
cout<<"unsigned int size"<<sizeof(h)<<endl;
a=INT_MAX;
b=INT_MIN;
cout<<"before:"<<a<<endl;
a=a+1;
cout<<"after"<<a<<endl;
cout<<"before:"<<b<<endl;
b=b-1;
cout<<"after"<<b<<endl;

	return 0;
}