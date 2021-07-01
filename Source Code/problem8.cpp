#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char arr[1000];
    ifstream file("data.txt"); // file :data.txt va file source code phai cung vi tri
    int k=0;
    while(!file.eof())
    {
        file>>arr[k];
        k++;
    }
    file.close();
   /* for(int i=0;i<1000;)
    {
        for(int j=0;j<50;j++,i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
    }
    */
    long long result=0;
    
    for(int i=0;i<987;i++)
    {
    	long long area=1;
    	for(int j=i;j<i+13;j++)
    	{
    		area=area*(arr[j]-48);
		}
		if(area>result) result=area;
	}
	cout<<"the greatest product is "<<result;
    return 0;
}

