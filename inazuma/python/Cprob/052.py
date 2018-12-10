num = int(input())

count = 1
SOSU = 1

while num > 0:
	count *= num
	num -= 1

num = 1

while num != count:
	if count % num == 0:
		SOSU += 1

	num += 1



SOSU %= 10 ** 9 + 7 
print(SOSU)

# print(count)

