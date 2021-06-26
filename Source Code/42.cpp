#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int findSum(string name) // ham tinh tong cua 1 ten
{
	int sum=0;
	for (int i=0;i<name.length();i++)
	{
		sum +=(name[i]-65+1);
	}
	return sum;
}
int main()
{
	int count=0;
	long long sumOfName=0;
	string arr[1800];
	ifstream file("words.txt");
	int k=0;
	while (!file.eof()) // doc file words.txt
	{
		file>>arr[k];
		k++;
	}
	file.close();
	int arr_tri[2000]={0};
	for(int i=1;i<=100;i++) //tim 100 so tam giac dau tien va gan vao mang
	{
		int temp=0;
		temp=i*(i+1)/2;
		arr_tri[i-1]=temp;
	}
	for(int i=0;i<k;i++) // tim tong cua tung ten roi so sanh voi tung so tam giac 
	{
		int n=findSum(arr[i]);
		for(int j=0;j<200;j++)
		{
			if(n==arr_tri[j])  
			count++;
		}
	}
	cout<<"there are "<<count<<" triangle words";
	return 0;
}
