#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
using namespace std;
 
map<int, int>mp;
void triangle()
{
	for (int i = 1; i < 10000; i++)
	{
		mp[i*(i + 1) / 2] = 1;
	}
}
 
int main()
{
	triangle();
	ifstream input;
	input.open("words.txt");
	char s[16347];
	while (!input.eof())
		input >> s;
	input.close();
	vector<string> name;
	string tm;
	for (int i = 1; i <= 16346; i++)
	{
		if (s[i] >= 65 && s[i] <= 90 && s[i + 1] == '"')
		{
			tm = tm + s[i];
			name.push_back(tm);
			tm.clear();
		}
		else if (s[i] == ',' || s[i] == '"')
			continue;
		else
			tm = tm + s[i];
	}
	int ans = 0;
	for (int i = 0; i < name.size(); i++)
	{
		int sum = 0;
		for (int j = 0; j < name[i].length(); j++)
		{
			sum = sum + name[i][j] - 'A' + 1;
		}
		if (mp[sum] == 1)
			ans++;
	}
	cout << ans << endl;
	system("pause");
	return 0;
}


