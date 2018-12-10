num = int(input())
tmp = num
while :
	
	if num % 2 != 0:
		num -= 1
		tmp = num
	else:
		num /= 2

print (tmp)	
