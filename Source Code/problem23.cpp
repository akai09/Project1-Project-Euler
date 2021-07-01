#include <iostream>
using namespace std;

int findAbu(int n) 
{
    int sum = 0;

    for(int i = 1; i < n; i++)
	if(n % i == 0) sum += i;

    if(sum>n) return n;
    else return 0;
}

int main() 
{
    int sum  = 0;
    int size = 0;
    int arr[28123] = {0}; // mang de kiem tra tong 2 so co la so phong phu khong
    int arrAbu[28123] = {0}; // mang luu so phong phu

    for(int i = 0; i < 28123; i++)
    {
    if(findAbu(i) > 0) 
	   {
		arrAbu[size] = findAbu(i);
		size++;
	   }	
	}
    for(int i = 0; i < size; i++)
    {
    	for(int j = i; j < size; j++) // tranh lap lai
	    arr[arrAbu[i] + arrAbu[j] < 28123? arrAbu[i] + arrAbu[j]:0]=1;
	}
    for(int i = 0; i < 28123; i++)
	{
    	if(arr[i] == 0) sum += i;
	}
	cout<<"sum of all the positive integers which cannot be written as the sum of two abundant numbers is "<<sum;
    return 0;
}

