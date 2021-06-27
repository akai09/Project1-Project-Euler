#include<iostream>
using namespace std;

int snt[1000001];
int num[1000001];

bool check(int n)
{
    int k=10;
    while(k/10<=n) 
    {
    	if(num[n%k]) // chia dan cho 10,100,1000,10000
	    return false;
    	k*=10;
	}
    while(n)
	{
        if (num[n])
		 return false;
        n/=10;
    }
    return true;
}

int main()
{
    int count=0;
    num[1]=1;
    for(int i=2;i<1000000;i++)
	{
        if(num[i]==0)   
		{
			count++;
			snt[count]=i;
		}
        for (int j=1;j<=count&&i*snt[j]<1000000;j++)
		{
            num[i*snt[j]]=1;
        }
    }
    int n=0,answer=0;
    for (int i=5;n<11;i++) // khong tinh 4 so dau 2,3,5,7 
	{
        if (check(snt[i]))
		{
            n++;
			answer+=snt[i];
        }
    }
    cout<<"the sum is "<<answer;
    return 0;
}
