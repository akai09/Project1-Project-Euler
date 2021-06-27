#include<iostream>
#include<math.h>
using namespace std;

bool ktSNT(int n) // kiem tra so nguyen to
{
    for (int i=2;pow(i,2)<=n;i++)
    {
        if (n%i==0)
            return false;
    }
    return true;
}

bool GB_true(int n) // kiem tra menh de GB dung hay sai
{
    for (int i=0;2*pow(i,2)<n;i++)
    {
        if (ktSNT(n -2*pow(i,2)))
            return true;
    }
    return false;
}

int main()
{
    int num=3;
    while (GB_true(num))
    {
        num+=2;
    }
    cout<< "the smallest num is " << num;
    return 0;
}
