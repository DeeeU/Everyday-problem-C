#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;

vector<ll> nums(1000000, -1);

ll ryuka(ll n)
{
  if(n == 0) return nums[0];
  else if(n == 1) return nums[1];
  else if(nums[n] != -1) return nums[n];
  else return nums[n] = ryuka(n-1) + ryuka(n-2);

}

int main()
{
  ll n;
  cin >> n;
  nums[0] = 2;
  nums[1] = 1;
  cout << ryuka(n) << endl;
}
