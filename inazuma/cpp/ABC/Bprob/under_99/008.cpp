#include <iostream>
#include <string>
#include <algorithm>
// #include <array>
using namespace std;

int main()
{
	int n,x;
	cin >> n;
	string name[n];
	int count[n];
	int maxv = 0;


	for (int i = 0; i < n; ++i)
	{
		cin >> name[i];
		count[i] = 0;
	}


	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (name[i] == name[j])
			{
				count[i]++;
			}

		}	
	}


	for (int i = 0; i < n; ++i)
	{
		if (maxv <= count[i])
		{
			maxv = count[i];
			x = i;
		}
	}

	cout << name[x] << endl;
}