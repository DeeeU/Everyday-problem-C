n = list(map(int, input().split()))
a = []
for i in range(n[0]):
  a.append(input())

a.sort()

for i in range(n[0]):
  print(a[i], end="")
print()
