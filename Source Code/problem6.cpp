#include<iostream>
using namespace std;
int sum1(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum +i*i;	
	}
	return sum;
}
int sum2(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum*sum;
}
int main()
{
	int n;
	cout<<" hay nhap n:";
	cin>>n;
	cout<<" ket qua la: "<<sum2(n)-sum1(n);
}
