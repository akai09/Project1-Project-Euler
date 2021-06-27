#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[15][15]={0};
	int arr_sum[15][15]={0};
	ifstream file("data1.txt"); // doc file
	for(int i=0;i<15;i++)
	{
		for(int j=0;j<=i;j++)
		{
			file>>arr[i][j];
		}
	}
	file.close();   // dong file 
	for(int i=0;i<15;i++)
	{
		arr_sum[14][i]=arr[14][i];
	}	
	for(int i=14;i>0;i--)
	{
		for(int j=0;j<15&&arr[i][j]!=0;j++)
		{
			int sum;
			if(arr[i-1][j]!=0)
			{
				sum=arr_sum[i][j]+arr[i-1][j];
				if(arr_sum[i-1][j]<sum)
				arr_sum[i-1][j]=sum;
			}
			if(j>0) //  neu j>0 thi duyet sang tay trai
			{
				sum=arr_sum[i][j]+arr[i-1][j-1];
				if(arr_sum[i-1][j-1]<sum)
				arr_sum[i-1][j-1]=sum;
			}
		}
	}
	cout<<"maximum total from top to bottom of the triangle is "<<arr_sum[0][0];
	return 0;
}
