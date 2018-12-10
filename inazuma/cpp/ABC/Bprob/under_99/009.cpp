#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int n,tmp;
	cin >> n;
	vector<int> v;
	int maxv = 0;
	int x = 0;
	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		v.push_back(tmp);
		if (maxv <= v[i])
		{
			x = i;
			maxv = v[i];
		}
	}
	sort(v.begin(),v.end());
	set<int> s(v.begin(), v.end());
	vector<int> v2(s.begin(), s.end());

	// for (int i = 0; i < v.size(); i++)
	// {
	// 	cout << v2[i] << endl;
	// }

	for (int i = 0; i < v2.size(); i++)
	{
		if (v2[i] == maxv)
			{
				v2.erase(v2.begin()+i);
			}	
	}

	
	// cout << maxv << endl;

	maxv = 0;

	for (int i = 0; i < v2.size(); i++)
	{
		if (maxv <= v2[i])
		{
			maxv = v2[i];
		}
	}

	cout << maxv << endl;
}	


