n = int(input())
numbersA = input().split()
numbersB = input().split()
diff = []
plusTotal = 0
minousTotal = 0

for i in range(0,n):
	diff.append((int(numbersB[i]) - int(numbersA[i])))
	if diff[i] < 0:
		minousTotal += diff[i]
	else:
		plusTotal += diff[i] // 2



if plusTotal >= abs(minousTotal):
	print("Yes")
else:
	print("No")