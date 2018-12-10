if __name__ == '__main__':
	time = input()
	times = time.split()
	# print(times)

	
	if ((int(times[0]) < int(times[2])) and (int(times[3]) > int(times[1]))):
		print(int(times[1]) - int(times[0]))
	
	elif ((int(times[0]) > int(times[2])) and (int(times[3]) < int(times[1]))):
		print(int(times[3]) - int(times[2]))

	elif (int(times[2]) > int(times[1])) or (int(times[0]) > int(times[3])):
		print("0")
	
	else:
		print(int(times[2]) - int(times[1]))