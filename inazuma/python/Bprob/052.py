userInp = int(input())
# print(type(userInp))

inpStr = input()
inpStrs = list(inpStr)
count = 0;
maximum = 0;

for x in range(0,userInp):
	if inpStrs[x] == "I":
		count+= 1
		if maximum <= count:
			maximum = count

	elif inpStrs[x] == "D":
		count -= 1


print(maximum)
