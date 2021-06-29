#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"hay nhap n : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i%3==0||i%5==0)
        {
            sum+=i;
        }
    }
    cout<<"sum of mul blow n of 3 or 5 is "<<sum;
}
