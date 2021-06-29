#include<iostream>
using namespace std;
bool KTsnt(int n)
{
	int count=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0) count++;
	}
	if(count=2) return true;
	else return false;
}
int main()
{
	long long n;
	cout<<" hay nhap vao n: ";
	cin>>n;
	int i=2;
	long long max=0;
	while(n!=1)
	{
		if(KTsnt(i)&&n%i==0)
		{
			n/=i;
			if(max<i) max=i;
		}
		else i++;
		
	}
	cout<<"largest prime factor la : "<<max;
	return 0;
	
}
