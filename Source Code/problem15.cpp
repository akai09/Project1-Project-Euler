#include<iostream>
using namespace std;
int main()
{
	long long int arr[21][21]={0};
	for(int i=0;i<21;i++)
	{
		for(int j=0;j<21;j++)
		{
			arr[0][j]=1; // hang dau =1
			arr[i][0]=1; // cot dau bang 1
		}
	}
	for(int i=1;i<21;i++)
	{
		for(int j=1;j<21;j++)
		{
			arr[i][j]=arr[i-1][j]+arr[i][j-1]; // phan tu ij = phan tu [i-1][j] + phan tu[i][j-1]
		}
	}
	cout<<" there are "<<arr[20][20]<<" routers through 20x20 ";
	
	return 0;
	
}
