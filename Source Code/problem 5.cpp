#include<iostream>
#include<math.h>
using namespace std;
unsigned long long tinhGT(int n)
{
	int gt=1;
	for(int i=1;i<=n;i++)
	{
	   gt*=i;
	   i++;	
	}
	return gt;

}
int main()
{
	for(int i=1;i<tinhGT(20);i++)
	{
	    int	count=0;
		for(int j=1;j<=20;j++)
		{
		   if(i%j==0)	count++;
		}
		if(count==20)
		{
			cout<<"so nho nhat chia het cho tat ca ca so tu 1 den 20 la: "<<i;
			break;
		}
	}
}
