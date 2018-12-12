# N = int(input())
# field = []
# for i in range(N):
#     x , y , z = map(int,input().split())
#     field.append((x , y , z))
# print(field)
# for x,y,z in field:
#     if z > 0:
#         list1 = (x,y,z)
#         break

N = int(input())
lst = [list(map(int, input().split())) for i in range(N)]

for x, y, h in lst:
    if h > 0:
        base = (x, y, h)
        break
print(base)
#
# for cx in range(101):
#     for cy in range(101):
#         H = base[2] + abs(base[0] - cx) + abs(base[1] - cy)
#         if all([max(H - abs(x - cx) - abs(y - cy), 0) == h for x, y, h in lst]):
#             print(cx, cy, H)
#             exit()
#
