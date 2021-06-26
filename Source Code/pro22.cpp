#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
using namespace std;
int findSum(string name ,int n) // tính tổng từng chuỗi
{
	int sum = 0;
	for (int i = 0; i < name.length(); i++)
	{
		sum += (name[i]-65 + 1);
	}
	return sum*n;
}
int main()
{
	long long sumOfScore = 0;
	string arr[5200];
	ifstream file("names.txt");
	int k = 0;
	while (!file.eof()) // đọc cho đến cuối file
	{
		file >> arr[k];
		k++;
	}
	file.close();
	sort(arr, arr+k); // sắp xếp arr[5200] theo ABC
	for (int i = 0; i < k; i++)
	{
		sumOfScore += findSum(arr[i], i + 1);
	}
	cout << "the total of all the name scores in the file is " << sumOfScore;

	return 0;
}
