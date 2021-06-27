#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

bool ktSNT(int n) // ham kiem traa so nguyen to
{
    for (int i=2;i<=sqrt(n);i++)
	{
        if (n%i==0) return false;
    }
    return true;
}

int main(){
    int gt[9]={0};
    gt[0]=1;
    for (int i=1;i<=8;i++)  // tinh chinh hop
    {
    		gt[i]=gt[i-1]*i;
	}
    char arr[]={'1','2','3','4','5','6','7','8'};// toi da la tu 1-> 8 vi tong tu 1->9 =45 
    int answer=0;
    for (int k=8;k>=1;k--) 
	{
        for (int i=1;i<=gt[k]&&!answer;i++) 
		{
            prev_permutation(arr,arr+k); // ham lay hoan vi tiep theo co thu tu sap xep thap hon hoan vi hien tai
            int temp=0;
            for (int j=0;j<k;j++) // chuyen doi chuoi ki tu thanh so nguyen
			{
                temp=temp*10+arr[j]-48;
            }
            if (ktSNT(temp)) 
			{
				answer=temp;
				break;
			}
        }
    }
    cout<<" the largest n-digit pandigital prime that exists is "<<answer;
    return 0;
}
