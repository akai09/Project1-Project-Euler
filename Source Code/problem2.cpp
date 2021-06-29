#include <iostream>
using namespace std;
int main()
{
	int a=0,b=1,c,sum=0;
	int n;
	cout<<"ban hay nhap so n ";
	cin>>n;
	while(c<=n)
	{
		c=a+b;
		if(c%2==0)
		{
			sum+=c;
		}
		a=b;
		b=c;
	}
	cout<<" sum of even fibonaci numbers : "<<sum;
}
