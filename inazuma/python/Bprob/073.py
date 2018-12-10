def countNum(num):
	count = 0
	for x in range(0,num):
		count += int(inputSeats[x][1]) - int(inputSeats[x][0]) + 1		
	return count

inputSeats = [[]]
if __name__ == '__main__':
	inputNum = int(input())
	# print(type(inputNum))

	for x in range(0,inputNum):
		inputSeat = input()
		inputSeats.append(inputSeat.split())
		# print(inputSeats[x])

	inputSeats.pop(0)
	print(countNum(inputNum))		