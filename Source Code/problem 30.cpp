#include<iostream>
#include<math.h>
using namespace std;

int checkNum(int n)
{
	int result=0;
	while(n!=0)
	{
		int a=0;
	    a=n%10;
	    result+=pow(a,5);
		n/=10;	
	}
	return result;	
}
int main()
{
	int sum=0;
	for(int i=2;i<=6*pow(9,5);i++) // vi 7.9^5 < 1000000 , 6.9^5 =354294 la so co 6 chu so
	{
		if(checkNum(i)==i) 
		sum+=i;
	}
	cout<<" the sum of all the numbers that can be written as the sum of fifth powers of their digits is "<<sum;
	return 0;
}

