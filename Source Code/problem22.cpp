#include<iostream>
#include<vector>
using namespace std;
bool checkAbunNum(int n) // ham check so phong phu
{
	int sum = 0;
	for (int i=1; i < n; i++)
	{
		if (n % i == 0) sum += i;
	}
	if (sum > n) return true;
}
int main()
{
	vector<int> vt;
	for(int i=12;i<28123;i++) // gan so phong phu vao vector
	{
		if(checkAbunNum(i))
		{
			vt.push_back(i);
		}
	}
	/*
	for(int j=0;j<vt.size();j++)
	{
		cout<<vt[j]<<endl;
	} */
	int abunum[57000]={0};
		
	for(int i=0;i<vt.size();i++)
	{
		for(int j=i;j<vt.size();j++)
		{
			abunum[vt[i]+vt[j]-1]= 1;
		}
	}
	long long result=0;
		for(int i=0;i<28123;i++)
		{
			if(abunum[i]==0);
			result+= (i+1);
		}	
	cout<<result;
	return 0;
}
