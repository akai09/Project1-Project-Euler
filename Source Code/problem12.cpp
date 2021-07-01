#include<iostream>
#include<math.h>
using namespace std;
int findTriangleNum(int n)
{
	int num=0,triangleNum=0;
	int count;
	while(1)
	{
		int a;
		num++;
		triangleNum+=num;
		count=0;
		a=floor(sqrt(triangleNum));
		for(int i=1;i<=a;i++)
		{
			if(triangleNum%i==0) count+=2;  // vi du nghiem nho hon can 
			if(a*a==triangleNum) count--;   // kiem tra vi du nhu 25=5x5 thi 5 chi la 1 nghiem
		}
		if(count>n)
			break;
	}
	return triangleNum;

}
int main()
{
	int n;
	cout<<" enter n : ";
	cin>>n;
	cout<<"the first triangle num to have over "<<n<<" divisors is: "<<findTriangleNum(n);
	return 0;
}



