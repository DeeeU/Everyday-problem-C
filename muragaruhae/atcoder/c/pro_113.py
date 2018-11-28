# 要復習
N , M = map(int, input().split())
field = []
for i in range(M):
    p,y = map(int, input().split())
    field.append((y, p, i))
field.sort()

sum = [0 for i in range(N)]
field2 = []

for i in range(M):
	sum[field[i][1]-1] += 1
	field2.append((field[i][2], field[i][1], sum[field[i][1]-1]))
field2.sort()
for i in range(M):
	print(str(field2[i][1]).zfill(6)+str(field2[i][2]).zfill(6))
