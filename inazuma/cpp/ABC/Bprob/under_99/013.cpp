#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	int ans = 0;

	if (b - a >= 5)
	{
		ans += (10 - b);
		ans += a;
	}
	else if (a - b >= 5)
	{
		ans += (10 - a);
		ans += b;
	}
	else if (b >= a)
	{
		ans += (b - a);
	}else
	{
		ans += (a - b);
	}

	cout << ans << endl;
}