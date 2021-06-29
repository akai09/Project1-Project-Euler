#include<iostream>
using namespace std;
bool KTsonguoc(int n)
{
	int a=n,songuoc=0;
	while(a!=0)
	{
      int	k=a%10;
      songuoc=songuoc*10+k;
      a/=10; 
	}
	if(songuoc==n)
	return true;
	else
	return false;
}

int main()
{
	int ketqua=0;
	for(int i=1000;i>=100;i--)
	{
		for(int j=1000;j>=100;j--)
		{
			int so=i*j;
			if(KTsonguoc(so))
			{
			if(ketqua<so)
			ketqua=so;	
			}
		}
		
    }
    cout<<" So plindromic co 6 chu so lon nhat la : "<<ketqua;
}

