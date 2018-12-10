def judgeAdd():
	for i in range(0,int(num)):
		if int(blackBoards[i]) % 2 == 0: 
			evenNum[i] = True	

def answer():
	count += 1
	for i in range(0,int(num)):
		evenNum[i] = False	
		blackBoards[i] /= 2


		
num = input()
blackBoard = input()
blackBoards = blackBoard.split()
count = 0
evenNum = []
judgeAdd()
if evenNum[num]:
	answer()
elif evenNum[num] == False:
	print(count)