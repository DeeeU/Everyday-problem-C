money = int(input())
a = int(input())
b = int(input())
money -= a
while money >= b:
	money -= b

print(money)