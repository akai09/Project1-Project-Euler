#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[10000];
    for (int i=1;i<=100;i++)    num[i*(i+1)/2]=1;
    char tmp[100000];
    ifstream input;
	input.open("words.txt");
	while (!input.eof())
		input >> tmp;
	input.close();
    int ans=0;
    scanf("%s",&tmp);
    for (int i=1,sum=0;tmp[i];i+=3,sum=0){
        for (;tmp[i]!=34;i++)   sum+=tmp[i]-'A'+1;
        if(num[sum])    ans++;  
    }
    cout<<ans<<endl;
    return 0;
}
