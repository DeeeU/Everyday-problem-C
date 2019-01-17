#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define itn int

typedef long long ll;
typedef pair<ll,ll> p;

int n, k, l;

// 要素に対応する値は自分の根。根は要素数の-1倍したものを代入する。
// 根ならそのグループの要素数(負)が、子であれば親の番号が入る。初期値-1。
vector<int> uni1(200000, -1);
vector<int> uni2(200000, -1);

// 頂点aの所属するグループを調べる。
int root(int a, vector<int> uni)
{
  // uni[a]が負の値なら親はa自身
  if (uni[a] < 0) return a;
  // 正の値であれば、親ルートを調べ戻り値で根に直接つなぐ。
  else {
    uni[a] = root(uni[a], uni);
    return uni[a];
    // return uni[a] = root(uni[a]);
  }
}

// 頂点aとbをつなぐ、もともと同じグループの場合falseを返す。
bool connect(int a, int b, vector<int> uni)
{
  a = root(a, uni);
  b = root(b, uni);
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
bool isConnect(int a, int b, vector<int> uni)
{
  return root(a, uni) == root(b, uni);
}

// 頂点aを含むグループの頂点数を調べる
int size(int a, vector<int> uni)
{
  return -uni[root(a, uni)];
}

int main()
{
  cin >> n >> k >> l;
  vector<p> v(k, {0, 0});
  vector<int> res(n+1, 0);

  for (int i = 0; i < k; i++) {
    cin >> v[i].first >> v[i].second;
    connect(v[i].first, v[i].second, uni1);
  }

  vector<p> r(l, {0, 0});
  for (int i = 0; i < l; i++) {
    cin >> r[i].first >> r[i].second;
    connect(r[i].first, r[i].second, uni2);
    if(isConnect(r[i].first, r[i].second, uni1))
    {
      res[r[i].first]++;
      res[r[i].second]++;
    }
  }

  for (int i = 0; i <= n; i++) {
    cout << uni1[i] << endl;
  }

  for (int i = 1; i <= n; i++) {
    cout << res[i] << " ";
  }
  cout << endl;
}
