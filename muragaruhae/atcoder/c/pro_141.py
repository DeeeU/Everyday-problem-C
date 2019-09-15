n,k,q = map(int,input().split())
life = [k-q]*n
for i in range(q):
    life[int(input())-1] += 1
for i in range(n):
    print("Yes" if life[i] > 0 else "No")

