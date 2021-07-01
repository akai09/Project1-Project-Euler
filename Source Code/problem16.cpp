#include<iostream>
using namespace std;
int main()
{
	int arr[500]={0}; // mang chua cac chu so cua 2^1000
	int c,sum,temp;
	arr[0]=1;
	for(int i=0;i<1000;i++)
	{
		c=0;
		for(int j=0;j<500;j++)
		{
			temp=2*arr[j]+c;
			c=0;
			if(temp>9)
			{
				arr[j]=temp%10;
				c=temp/10;
			}
			else arr[j]=temp;
		}
	}
	sum=0;
	for(int i=0;i<500;i++)
	{
		sum+=arr[i];
	}
	cout<<endl;
	cout<<sum;
	return 0;
}
