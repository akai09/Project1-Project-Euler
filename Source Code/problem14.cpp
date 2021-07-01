#include<iostream>
using namespace std;
long long checkLongestChain(int n)
{
	long long i,answer;
	long long j;	
	int count;
	int max=0;
	for(i=2;i<n;i++)
	{
		count=1;
		j=i;
		
		while(j>1)
		{
			while(j%2==0)
			{
				j/=2;
				count++;
			}
			if(j>1) // sau khi thoat khoi vong while bên tren ma j > 1 thi luc do j la so le
			{
				j=3*j+1;
				count++;
			}
		}
		if(count>max) 
		{
			max=count;
			answer=i;
		}
			
	}
	return answer;
}
int main()
{
	cout<<" the longest chain is "<<checkLongestChain(1000000);
}
