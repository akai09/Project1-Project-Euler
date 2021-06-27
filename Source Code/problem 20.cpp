#include <iostream>
using namespace std;

int find_sum(int n)
{ 
  int arr[1000]={0};
  int c,num,k,result=0;
  arr[0]=1; 
  k = 1;
  for (int i=1;i<=n;i++)
  {
    c = 0;
    for (int j=1;j<=k;j++)
    {
      num = arr[j-1]*i + c;
      arr[j-1] = num%10; 
      c = num/10;
    }
    while (c>0)
    {
      arr[k] = c%10;
      k++;
      c/=10;
    }
  }
  for (int i=0;i<1000;i++)
    {
      result+=arr[i];
    }
  return result;
}

int main()
{
	int n;
	cin>>n;
  cout<<"sum of digit of " <<n<<" is "<<find_sum(n);
  return 0;
}
