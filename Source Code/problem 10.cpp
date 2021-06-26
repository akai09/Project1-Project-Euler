#include<iostream>
#include<math.h>
using namespace std;
bool ktSNT(int n)     // ham kiem tra so nguyen to
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;	
	}
	return true;
}
int main()
{
	long long sum=2;
	for(int i=3;i<2000000;i+=2)    // snt luon la so le
	{
		if(ktSNT(i))
		{
			sum+=i;
		}
	}
	cout<<" sum of the all the primes below 2 million is: "<<sum;
	
}


