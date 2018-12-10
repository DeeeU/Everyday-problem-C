#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn long long

typedef long long ll;
typedef pair<ll,ll> p;

// 要素に対応する値は自分の根。根は要素数の-1倍したものを代入する。
// 根ならそのグループの要素数(負)が、子であれば親の番号が入る。初期値-1。
vector<int> uni(2000000, -1);

// 頂点aの所属するグループを調べる。
int root(int a)
{
  // uni[a]が負の値なら親はa自身
  if (uni[a] < 0) return a;
  // 正の値であれば、親ルートを調べ戻り値で根に直接つなぐ。
  else {
    uni[a] = root(uni[a]);
    return uni[a];
    // return uni[a] = root(uni[a]);
  }
}

// 頂点aとbをつなぐ、もともと同じグループの場合falseを返す。
bool connect(int a, int b)
{
  a = root(a);
  b = root(b);
  if (a == b) return false;

  // aを大きなグループにしたいので、逆であれば入れ替える。
  if (uni[a] > uni[b])
  {
    int hoge = a;
    a = b;
    b = hoge;
  }

  //aとbを結合し、bをaの親とする。
  uni[a] += uni[b];
  uni[b] = a;
  return true;
}

//  頂点a, bが同じグループか
bool isConnect(int a, int b)
{
  return root(a) == root(b);
}

// 頂点aを含むグループの頂点数を調べる
int size(int a)
{
  return -uni[root(a)];
}

int main()
{
  #define int long long
  int n, m;
  cin >> n >> m;
  vector<p> v;
  for (int i = 0; i < m; i++)
  {
    int hoge,huga;
    cin >> hoge >> huga;
    // cin >> v[i].first >> huga;
    if(huga == 1)
    {
      int tmp = hoge;
      hoge = huga;
      huga = tmp;
    }
    if(hoge == 1 || huga == n) v.push_back(make_pair(hoge, huga));
  }

  for(auto a : v)
  {
    if(a.first == 1) connect(1, a.second);
    if(a.second == n) connect(a.first, a.second);
  }

  if(isConnect(1, n)) cout << "POSSIBLE" << endl;
  else cout << "IMPOSSIBLE" << endl;
  // for(auto a : v)
  // {
  //   if(a.first == 1)
  //   {
  //     for(auto i : v)
  //     {
  //       // cout << a.second << " : " << i.first << endl;
  //       if(a.second == i.first && i.second == n)
  //       {
  //         cout << "POSSIBLE" << endl;
  //         return 0;
  //       }
  //     }
  //   }
  // }
  // cout << "IMPOSSIBLE" << endl;
}
