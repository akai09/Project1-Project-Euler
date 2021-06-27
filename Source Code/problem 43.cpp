#include <iostream>
#include<algorithm>
#include<string>


char arr[]="0123456789";
using namespace std;
long long charToInt(string arr) // ham chuyn tu char ve so nguyen
{
	long long temp=0;
	long long k=1;
	for(int i=9;i>=0;i--)
	{
		temp += (arr[i]-48)*k;
		k*=10;
	}
	return temp;
}
int main()
{
	long long sum=0;
	int snt[7]={2,3,5,7,11,13,17};
	int num;
	for(int i=0;i<3628800;i++)
	{
		int k=0;
		next_permutation(arr,arr+10);// ham tra ve hoan vi co thu tu sap xep cao hon
		for(int j=0;j<7;j++)
		{
			num=(arr[j+1]-48)*100 + (arr[j+2]-48)*10 + (arr[j+3]-48); // xet tung bo 3 chu so
			if(num%snt[j]!=0)
			{
				k=1;
				break;
			}
		}
		if(k==0)
		{
			sum+=charToInt(arr);		
		}
	}
	cout<<"the sum of all 0 to 9 pandigital numbers with this property : "<<sum;
	return 0;
}
