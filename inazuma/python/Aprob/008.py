def countNum(n):
	count = []
	for x in range(0,n):
		count[x] = 0
		# print(count[x])

	for x in range(0,n):
		for l in range(0,n):
			if name[x] == name[l]:
				count[l] += 1
				continue

		
	return max(count)			



name= []
if __name__ == '__main__':
	num = int(input())
	for i in range(0,num):
		name.append(input())
		# print(name[i])
	# name.pop(0)
	print(name)
	tmp = countNum(num)
	print(tmp)