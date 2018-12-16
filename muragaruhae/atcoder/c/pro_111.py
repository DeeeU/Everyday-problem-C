from collections import Counter

n = int(input())
v = list(map(int,input().split()))
a1 = []
a2 = []
for i in range(n):
    if i % 2 == 0:
        a1.append(v[i])
    else:
        a2.append(v[i])

a1 = Counter(a1)
a2 = Counter(a2)

a1 = a1.most_common()
a2 = a2.most_common()

if a1[0][0] == a2[0][0]:
    if len(a1) == 1 and len(a2) == 1:
        print(int(n/2))
    else:
        if a1[1][1] > a2[1][1]:
            print(n-a1[1][1]-a2[0][1])
        else:
            print(n-a1[0][1]- a2[1][1])
else:
    print(n - a1[0][1] - a2[0][1])
