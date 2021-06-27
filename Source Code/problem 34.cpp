#include<iostream>
using namespace std;
int factorial(int k)
{
	if(k==1||k==0) return 1;
	if(k==2)  return 2;
	return factorial(k-1)*k;
}
int sumNum(int n)
{
	int sum=0;
	while(n>0)
	{
		int k=0;
		k=n%10;
		sum+=factorial(k);
		n/=10;
	}
	return sum;
}
int main()
{
	int answer=0;
	for(int i=10;i<100000;i++)
	{
		if(sumNum(i)==i) 
		answer+=i;
	}
	cout<<"the sum of all numbers is "<<answer;
	return 0;
}
