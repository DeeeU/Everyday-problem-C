#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int flowers[n]; 
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> flowers[i];
		for (int j = 0; j < flowers[i]; j++)
		{
			if (flowers[i] % 2 == 0 || (flowers[i] - 2) % 3 == 0)
			{
				flowers[i]--;
				count++;
			}
		}
	}

	cout << count << endl;
}