#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	int n,tmp;
	char c;
	cin >> s >> n;
	vector<int> v;
	for (int i = 0; i < n * 2; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}

	for (int i = 0; i < n * 2; i+=2)
	{
		for (int i = 0; i < v[i+1]-v[i]; i++)
		{
			reverse(s.begin()+v[i],s.begin()+v[i+1])			
		}
	}

}