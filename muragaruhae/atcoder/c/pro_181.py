n = int(input())
p = [tuple(map(int, input().split())) for i in range(n)]

for i in range(n):
    for j in range(i):
        for k in range(j):
            print(i, j, k)
