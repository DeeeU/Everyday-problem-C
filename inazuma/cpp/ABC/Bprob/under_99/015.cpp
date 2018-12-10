#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int bugs[n];
	int sum = 0;
	int total = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> bugs[i];
		if (bugs[i] != 0)
		{
			sum += bugs[i];
			total++;
		}	
	}
	if (sum % total != 0)
	{
		sum /= total;
		sum++;
	}
	else
	{
		sum /= total;
	}


	cout << sum << endl;


} 