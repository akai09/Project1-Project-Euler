#include<iostream>;
using namespace std;
 
int DemSNT(int n) // ham dem so thua so nguyen to
{
	int count =0;
	int k=2;
	while (n!=1) 
	{
		if(n%k==0) 
		{
			count++;
			while(n%k== 0)
				n/=k;
		}
		k++;
	}
	return count;
}
 
int main()
{
	int counter = 0;
	int n=2;
    while(1)
	{
		if(DemSNT(n)==4)
  			counter++;
     	else
      		counter=0;     
     	if(counter==4) 
		{
     		cout<<"the first of these numbers is "<<n-3;
 			break;
		}
		n++;
	}
	return 0;
}

