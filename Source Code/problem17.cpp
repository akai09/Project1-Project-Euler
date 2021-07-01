#include<iostream>
#include<string.h>
using namespace std;
char* one[]={"one","two","three","four","five","six","seven","eight","nine","ten"};
char* two[]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char* three[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
int TwoDigitNum(int n)
{
	int count=0;
	if(n>10&&n<20)
	{
		return strlen(two[n%10-1]);
	}
	int k=n%10;
	if(k>0)
	{
		count=strlen(one[k-1]);
	}
	n/=10;
	count+=strlen(three[n-2]);
	return count;
	
}

int ThreeDigitNum(int n)
{
	int count=0;
	int k=n%100;
	if(k>0)
	{
		if(k>10) //  vd: 110
		{
			count=TwoDigitNum(k);
		}
		else //   vd: 101
		count=strlen(one[k-1]);
			count+=3; // +3 vi and 
    }
	n/=100;
	count+=strlen(one[n-1])+7; // +7 vi hundred

	return count;
	
}

int main()
{

	
	int count=11; //onethoundsand
	for(int i=1;i<1000;i++)
	{
		if(i<=10) 
		   count+=strlen(one[i-1]);
		else if (i>=100) 
		   count+=ThreeDigitNum(i);
		else 
		   count+=TwoDigitNum(i);
	}
	cout<<"there are "<<count<<" letters would be used ";
	return 0;	
}
