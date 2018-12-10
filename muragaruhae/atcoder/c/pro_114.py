
N = int(input())
# 再帰関数
def dfs(s):
  if int(s) > N:
    return 0
# ７５３が含まれる数列を回収
  if(all(s.count(c) for c in '753')):
    ret = 1
  else:
  	ret = 0
# 条件にあう数列を抜き出している
  for c in '753':
    ret += dfs(s + c)
  return ret
# ’０’からスタート
print(dfs('0'))
