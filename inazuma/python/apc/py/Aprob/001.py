inp = input().split()

i = 1
x = 0

while i <= pow(10,18):
	if inp[0] == "1" and inp[1] == "1":
		print(-1)
		x = 1
		break
	if i % int(inp[0])  == 0 and i % int(inp[1]) != 0:
		print(i)
		x = 1
		break
	i *= int(inp[0])

if x == 0:
	print(-1)