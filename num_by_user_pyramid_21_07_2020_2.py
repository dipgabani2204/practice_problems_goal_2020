n = int(input('Enter the number'))
for i in range(1,((n+1)//2) + 1):
 	for j in range(1,n+1):
 		if j <= ((n+1)//2)-i+1 or j >= ((n+1)//2)+i-1:
 			print('*',end="")
 		else:
 			print(' ',end="")	
 	print('')
for i in range(1,((n+1)//2)):
	for j in range(1,n+1):
		if j <= i+1 or j >= n - i:
			print('*',end="")
		else:
 			print(' ',end="")
	print('')	