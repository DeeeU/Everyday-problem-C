value = input()
values = value.split()
# print(values)
if (int(values[0]) * int(values[1])) > (int(values[2]) * int(values[3])):
	print(int(values[0]) * int(values[1]))
else:
	print(int(values[2]) * int(values[3]))


