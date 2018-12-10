num = int(input())
hights = input().split()

tmp = int(hights[0])

for i in xrange(1,num):
	if int(hights[i]) > tmp:
		hights[i] = hights[i-1]
		hights[i] = tmp
		tmp = 