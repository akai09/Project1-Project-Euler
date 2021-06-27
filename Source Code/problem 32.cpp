#include<iostream>
#include<math.h>
using namespace std;

bool checkNum(int i,int j)
{
    int arr[10]={0};
    int k=i/j,count=0;
    while(k)   // cac chu so cua thuong gan vao mang bieu thi 1
	{
        if (arr[k%10]!=0)    // vi du k la 39 thi arr[9] khac 0 nghia la so 9 da xuat hien nen return false luon
		return false;
        else            
		arr[k%10]=1;
        k/=10;
		count++;
    }
    while(j)
	{
        if (arr[j%10]!=0)    
		return false;
        else            
		arr[j%10]=1;
        j/=10;
		count++;
    }
    while(i)
	{
        if (arr[i%10]!=0)    
		return false;
        else            
		arr[i%10]=1;
        i/=10;
		count++;
    }
    if(count==9&&arr[0]==0) // count =9 nghia la tu 1-9 xuat hien 1 lan 
	return true; 
	else return false;      
}

int main()
{
    int answer=0;
    for (int i=1;i<=9999;i++)
	{
        for (int j=2;j<sqrt(i);j++)
		{
             if (i%j==0&&checkNum(i,j))
			 {
                 answer+=i;
                 break;
             }
        }
    }
    cout<<"the sum of all products is "<<answer;
    return 0;
    }
