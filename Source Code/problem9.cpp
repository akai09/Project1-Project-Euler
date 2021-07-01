#include<iostream>
using namespace std;
int main()
{
    for(int a=0;a<=1000;a++)	
    {
    	for(int b=a+1;b<=1000;b++)
    	{
    	   int c=1000-a-b;
    	   if(c>b)
    	   {
    	   	if(c*c==a*a+b*b) {
    	   	cout<<" bo 3 so do la"<<" a= "<<a<<" b = "<<b<<" c = "<<c;
    	   	break;
    	   	}
		   }
		}
	}
}
