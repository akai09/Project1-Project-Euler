#include<iostream>
using namespace std;
int arr[10]={0,1,2,3,4,5,6,7,8,9};
int n=10;
void in_tohop()
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
}
void sapxep(int from ,int to)
{
	for(int i=from;i<to-1;i++)
	{
		for(int j=from+1;j<to;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main()
{
	
//	in_tohop();
 // vi da in 1 lan ban dau
    int i=n-1;
    int count=1;
	do{                // tim day giam dan
		i=n-1;
		while(arr[i-1]>arr[i])
		i--;
		if(i>0)
		{            // tim a[k]> a[i-1]
			int k=n-1;
			for(;k>=i;k--)
			{
				if(arr[k]>arr[i-1])
				break;
			}
			int temp=arr[i-1];
			arr[i-1]=arr[k];
			arr[k]=temp;
			sapxep(i,n);  // sap xep
		count++;
			if(count==1000000)
			{ break;}
			
			
	//	in_tohop();
		}
	}
	while(i>0); 
	in_tohop();
	return 0;
}
