#include<iostream>
#include<math.h>
using namespace std;
bool ktSNT(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
int timSNT(int n)
{
	int i=2,count=0;
	while(count!=n)
	{
		if(ktSNT(i)) count++;
		i++;		
	}
	return i-1;
}
int main()
{
	int n;
	cout<<" ban muon tim snt thu : ";
	cin>>n;
	cout<<" snt thu "<<n<<" la : "<<timSNT(n);
}
	

