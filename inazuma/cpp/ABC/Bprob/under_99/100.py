d = list(map(int, input().split()))

tmp = 0
if (d[0] == 0 and d[1] >= 100):
     tmp = d[1] / 100
if (d[0] == 1 and d[1] == 100):
     tmp = 100
if (d[0] == 2 and d[1] == 100):
    tmp = 10000

print(int(pow(100, d[0]) * d[1] + tmp));
