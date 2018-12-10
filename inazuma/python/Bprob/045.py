def throwHand(card):
	if card == "a":
		tmp = handA[0]
		list(handA).pop(0)
	elif card == "b":
		tmp = handB[0]
		list(handB).pop(0)
	elif card == "c":
		tmp = handC[0]
		list(handC).pop(0)
	
	return tmp


handA = input()
handB = input()
handC = input()
list(handA)
list(handB)
list(handC)
tmpMain = throwHand(handA[0])

while len(handA) > 0 or len(handB) > 0 or len(handC):
	tmpMain = throwHand(tmpMain)

print(tmpMain)