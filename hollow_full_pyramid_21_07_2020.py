for i in range(1,6):
	for j in range(1,14):
		if j == 8-i or j ==6+i:
			print('*',end="")
		else:
			print(' ',end="")
	print('\n')
for i in range(1,2):
	for j in range(1,14):
		if j == 2*i:
			print('*',end="")
			i = i+1;
		else:
			print(' ',end="")

print("Pyramid Pattern")
