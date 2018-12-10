tmp = input()
userInps = tmp.split()

tmp = input()
times = tmp.split()

total = 0


def check(i):
	# tmp = int(userInps[0])

	if int(userInps[1]) > int(times[i]) - int(times[i-1]):
		# total += (int(times[i]) - int(times[i-1]))
		n = (int(times[i]) - int(times[i-1]))
		# print(times[i-1])
		# print(times[i-2])
		# print(1)


	else:
		# total += int(userInps[0])
		n = int(userInps[1])
		# print(2)

	# print(n)
	return n	


for x in range(1,int(userInps[0])):
	# print(x)
	total += check(x)



total += int(userInps[1])
print(total)

