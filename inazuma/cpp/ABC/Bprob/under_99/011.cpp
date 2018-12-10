#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string n;
	cin >> n;
	transform(n.begin(), n.end(), n.begin(), ::toupper);
	transform(n.begin()+1, n.end(), n.begin()+1, ::tolower);
	cout << n << endl;
}