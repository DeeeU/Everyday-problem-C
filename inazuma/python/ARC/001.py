def countNum(num,answers):
	count1 = 0
	count2 = 0
	count3 = 0
	count4 = 0
	for i in range(0,int(probNum)):
		if answers[i] == "1":
			count1 += 1
		elif answers[i] == "2":
			count2 += 1
		elif answers[i] == "3":
			count3 += 1
		elif answers[i] == "4":
			count4 += 1

	return max(count1,count2,count3,count4),min(count1,count2,count3,count4)

if __name__ == '__main__':
	probNum = int(input())
	answer = input()
	answers = list(answer)
	# print(answers)
	MAX,MIN = countNum(probNum,answers)

	print(str(MAX)+" "+str(MIN))
