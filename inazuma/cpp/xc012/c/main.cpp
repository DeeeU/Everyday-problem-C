#include<iostream>
using namespace std;

typedef long long ll;

int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  int b[n];
  for (int i = 0; i < n; i++)
  {
    int tmp;
    scanf("%d",&tmp);
    a[i] = tmp;
    scanf("%d",&tmp);
    b[i] = tmp;
  }

  int res = 0;

  for (int i = n-1; i >= 0; i--) {
    if(b[i] <= 1) continue;
    int tmp = b[i] - (a[i] % b[i]);
    res += tmp;
    for (int j = 0; j < i; j++) {
      a[j] += tmp;
    }
  }

  printf("%d\n",res);

}
