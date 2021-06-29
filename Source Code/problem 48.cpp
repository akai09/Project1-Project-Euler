#include<iostream>
using namespace std;

int main()
{
	long long sum=0;
	long long temp = 1;
	for (long long i=1;i<=1000;i++)
	{
		temp=1;
		for (int j=1;j<=i;j++)
		{
			if (temp>10000000000)
			{
				temp =temp%10000000000; // lay 10 chu so cuoi nen lay so du khi chia cho 10^10
			}
			temp*=i; // so du cua i^k khi chia cho x thi se bang so du cua ( so du cua i^(k-1)).i
		}
		sum+=temp;
		if (sum>10000000000) 
		{
			sum=sum%10000000000;
		}
	}
	cout<<"the ten digits is "<<sum;
	return 0;
}
