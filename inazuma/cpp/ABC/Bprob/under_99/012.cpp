#include <iostream>
using namespace std;

int main()
{
	int time;
	cin >> time;

	int h = time / 3600;
	int m = (time % 3600) / 60;
	int s = (time % 3600) % 60;

	if (h < 10 && m < 10 && s < 10)
	{
			cout << "0" << h << ":" << "0" << m << ":" << "0" << s << endl;
	}
	else if (h < 10 && m < 10)
	{
			cout << "0" << h << ":" << "0" << m << ":" << s << endl;
	}
	else if(h < 10)	
	{
			cout << "0" << h << ":" << m << ":" << s << endl;
	}else
	{
			cout << h << ":" << m << ":" << s << endl;
	}

}