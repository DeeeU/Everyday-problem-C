def countBombs(y,x):
	count = 0
	for n in range(y-1,y+2):
		for m in range(x-1,x+2):
			# print(n)
			# print(m)
			if n < 1 or m < 0\
			 or n > int(inputsMassNum[0]) or m > int(inputsMassNum[1])-1:
				pass
			elif inputsBombs[n][m] == "#":
				count += 1

	return count
	

inputsBombs = [[]] 

#3*3想定
if __name__ == '__main__':
	input1 = input()
	inputsMassNum = input1.split()#3 3

	for i in range(0,int(inputsMassNum[0])):#0~3(3回)
		# print(i)
		input2 = input()#
		inputsBombs.append(list(input2)) #[0][]は空
		#  [   ] 
		#	###
		#	#.#
		#	###

		#inputBombs,「1」要素に追加
		# print(inputsBombs[i+1])
		# print("")

	for y in range(1,int(inputsMassNum[0])+1):#0~3
		for x in range(0,int(inputsMassNum[1])):
			# print(inputsBombs[y][x])
			if inputsBombs[y][x] == ".":#
				tmp = countBombs(y,x)
				inputsBombs[y][x] = tmp


	inputsBombs.pop(0)
	# for i in range(0,int(inputsMassNum[0])):
	# 	print(inputsBombs)

	for i in range(0,int(inputsMassNum[0])):
		for j in range(0,int(inputsMassNum[1])):
			print(inputsBombs[i][j],end = "")
		print("")
