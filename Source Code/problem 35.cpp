#include<iostream>

using namespace std;

int snt[1000001];
int num[1000001];

bool checkCirprimes(int n) // ham kiem tra cac hoan vi cua cac so co la so nguyen to hay khong
{
    int k=1;
    while(k<=n) // cac chu so lan luot cua n la 1,2,3,4,5 thi k lan luot la 1,10,100,1000,10000
	{  
	    k*=10;
	}
    k/=10;
    int temp=n;
    do
	{
        if(temp%10==0)  
		return false;
        temp=temp/10+temp%10*k; 
        if(num[temp])   // neu so da ton tai thi return false
		return false;
    }
	while(temp!=n); // lap den khi nao quay lai n
    return true;
}

int main()
{
    int answer=0;
    int count=0;
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
    for(int i=1;i<=count;i++)
	{
        if (checkCirprimes(snt[i]))
		{
            answer++;
        }
    }
	cout<<"there are "<<answer<<" circular primes below 1000000 ";
	return 0;
}
