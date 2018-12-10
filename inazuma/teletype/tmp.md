
# Atcoder

## A - Parking
https://beta.atcoder.jp/contests/abc080/tasks/abc080_a

### 問題文

駐車場があり、以下の二種類のプランのどちらかを選んで駐車できます。
<br>プラン 1: T 時間駐車した場合、A×T円が駐車料金となる。
<br>プラン 2: 駐車した時間に関わらずB円が駐車料金となる。
<br>N時間駐車するとき、駐車料金は最小でいくらになるか求めてください。

制約
<br>1≦T≦20
<br>1≦A≦100
<br>1≦B≦2000
入力は全て整数

入力

入力は以下の形式で標準入力から与えられる。
```
T A B
```

```
7 17 120
```



```cpp
using namespace std;

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <limits>
#include <climits>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <numeric>
typedef long long ll;
typedef pair<int,int> p;

int main()
{
  int t, a, b;
  cin >> t >> a >> b;
  if (t * a >= b)
  {
    cout << b << endl;
    }else{
      cout << t*a << endl;
    }
  }

```


```py
price = int(input()).split()
if  price > B:
print(B)
else:
print(N * A)


```

## B - Around Square

https://beta.atcoder.jp/contests/abc077/tasks/abc077_b

### 問題文

N以下の平方数のうち、最大のものを求めてください。 ただし、平方数とは、ある整数の2
乗として表せる整数のことを指します。
<br>制約
1≤N≤10**9

入力例 1
```
10
```
出力例 1
```
9
```


```py
jk = int(input())
import math
ol = math.sqrt(jk)
print(int(ol) ** 2)
```
```py
n = int(input())
print(int(n**(0.5))**2)
```

```py
import math
n = int(input())
while True:
  if math.sqrt(n) == math.floor(math.sqrt(n)):
    print(n)
    break
    n -= 1
    ```

```cpp
using namespace std;

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <limits>
#include <climits>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <numeric>
typedef long long ll;
typedef pair<int,int> p;

int main()
{
  long double n;
  cin >> n;
  while (true)
  {
    if (pow(n,0.5) == floor(pow(n,0.5)))
    {
      cout << n << endl;
      return 0;
    }
    n--;
  }
}

```

## C - 4-adjacent
https://beta.atcoder.jp/contests/abc069/tasks/arc080_a

```cpp
// CPP
using namespace std;

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <limits>
#include <climits>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <numeric>
typedef long long ll;
typedef pair<int,int> p;

int main()
{
  int n;
  cin >> n;
  vector<ll> v(n,0);
  int countA = 0;
  int countB = 0;
  int countC = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    if (v[i] % 4 == 0){
      countA++;
    }else if (v[i] % 2 == 0){
      countB++;
    }else{
      countC++;
    }
  }

  if (countB >= 1)
  {
    countC++;
  }

  if (countC <= countA + 1)
  {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}

```





```py
N = int(input())
list1 = list(map(int,input.split())
no1 = 0
no2 = 0
no3 = 0
for z in range(N):
  if list1[z] % 4 == 0:
    no1 += 1
  elif list1[z] % 2 == 0:
    no2 += 1
  else:
    no3 += 1

if (no1 + 1) >= no3 :
  print("YES")
else:
  print("NO")
```

```py
N = int(input())
list1 = list(map(int,input.split()))
no1 = 0
no2 = 0
no3 = 0
for z in range(N):

  if list1[z] % 4 == 0:
    no1 += 1
  elif list1[z] % 2 == 0:
    no2 += 1
  else:
    no3 += 1

  if no2 >= 1:
    no3 += 1


  if no1 + 1 >= no3:
    print("Yes")
  else:
    print("No")


```
