#include <iostream>
using namespace std;

int main ()
{
    long long k = 166;
    for(long long  h=144;h<=100000000;h++)
    {
        long long hexa =h*(2*h-1);
        for (long long p=k; ;p++)
        {
            long long penta=p*(3*p-1)/2;
            if (hexa==penta)
            {
             cout<<penta;
               return 0;
            }
            if (penta>hexa)
            {
                k=p;
                break;
            }
        }
    }
    return 0;
}
