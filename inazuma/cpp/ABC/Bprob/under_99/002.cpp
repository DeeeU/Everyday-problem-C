#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	cin >> a;
	int aSize = a.size();	
	// cout << a << endl;
	// cout << a[3];
	// cout << a[4] << endl;
	// cout << aSize << endl;

	for (int i = 0; i < aSize; i++)
	{
		if (a[i] == 'a')
		{
			// cout << 'a' << endl;
			a.erase(a.begin() + i);
			i--;
			aSize--;
			// cout << a << endl;
		}else if (a[i] == 'i')
		{
			// cout << 'i' << endl;
			a.erase(a.begin() + i);
			i --;
			aSize--;
		}else if (a[i] == 'u')
		{
			// cout << 'u' << endl;
			a.erase(a.begin() + i);
			i --;
			aSize--;
		}else if (a[i] == 'e')
		{
			// cout << 'e' << endl;
			a.erase(a.begin() + i);
			i --;
			aSize--;
		}else if (a[i] == 'o')
		{
			// cout << 'o' << endl;
			a.erase(a.begin() + i);
			i --;
			aSize--;
		}
	}
		cout << a << endl;

}