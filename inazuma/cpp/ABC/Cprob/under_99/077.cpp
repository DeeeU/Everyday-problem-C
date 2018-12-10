#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define itn int
typedef long long ll;
typedef pair<int,int> p;

vector<int> over;
vector<int> center;
vector<int> under;


int main()
{
  int n;
  cin >> n;
  int tmp;
  for (int i = 0; i < n; i++)
  {
    cin >> tmp;
    over.push_back(tmp);
  }

  for (int i = 0; i < n; i++)
  {
    cin >> tmp;
    center.push_back(tmp);
  }

  for (int i = 0; i < n; i++)
  {
    cin >> tmp;
    under.push_back(tmp);
  }

  sort(all(over));
  sort(all(center));
  sort(all(under));

  ll count = 0;
  int tmp2 = 0;
  int ave = 0;
  for(int i : center)
  {
    // cout << "========COUNT: " << count << endl;
    int low = 0;
    int high = n-1;
    ave = (high + low) / 2;
    // cout << "low: " << low << " high: " << high << " ave: " << ave << endl;
    while(high - low > 1) {
      if(over[ave] < i) low = ave;
      else high = ave;
      ave = (high + low) / 2;
      // cout << "low: " << low << " high: " << high << " ave: " << ave << endl;
    }
    if(over[high] < i && over[ave] < i) ave = high;
    while(over[ave] == i) ave--;
    tmp = ave + 1;
    // cout << ave << endl;
    // cout << tmp << endl;

    low = 0;
    high = n-1;
    ave = (high + low) / 2;
    // cout << "low: " << low << " high: " << high << " ave: " << ave << endl;
    while(high - low > 1) {
      if(under[ave] < i) low = ave;
      else high = ave;
      ave = (high + low) / 2;
      // cout << "low: " << low << " high: " << high << " ave: " << ave << endl;
    }
    if(under[ave] <= i && under[high] >= i) ave = high;
    while(under[ave] == i) ave++;
    // cout << ave << endl;
    tmp2 = n - (ave);
    // cout << tmp2 << endl;
    count += tmp * tmp2;
    // cout << tmp2 * tmp << endl;
    // cout << i << endl;
    // cout << tmp << endl;
    // cout << tmp2 << endl;
  }
  cout << count << endl;
}
