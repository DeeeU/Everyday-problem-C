import math

tmp = input()
tmps = tmp.split()
tmp = tmps[0] + tmps[1]
# print(tmp)

# print(pow(int(tmp),0.5))
if pow(int(tmp),0.5) / int(pow(int(tmp),0.5))  == 1:
	print("Yes")
else:
	print("No")