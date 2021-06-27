#include <iostream>
#include <string>
using namespace std;
 
string int_str(int n) // chuyen so thanh chuoi 
{
	string temp = "";
	while (n)
	{
		char s=n%10+48;
		temp=s+temp;
		n/=10;
	}
	return temp;
}
 
int main()
{
	string s="";
	for (int i = 1; i <= 200000; i++) // chi can den 200000 vi chu so cua 200000 so >100000
	{
		s+=int_str(i);
	}
	int num = 1;
	for(int i=1;i<=1000000;i*=10)
	{
		num*=(s[i-1]-48);
	}
	cout<<num;
	return 0;
}

