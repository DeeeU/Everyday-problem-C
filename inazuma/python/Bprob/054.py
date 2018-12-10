num = input()
nums = num.split()

# print(nums)

pictAs = [[]]
pictBs = [[]]
for i in range(0,int(nums[0])):
	pictA = input()
	pictAs.append(list(pictA))
	
pictAs.pop(0)
print(pictAs)

for i in range(0,int(nums[1])):
	pictB = input()
	pictBs.append(list(pictB))



pictBs.pop(0)
print(pictBs)

