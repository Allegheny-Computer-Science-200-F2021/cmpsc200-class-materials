.data
	str1:	.asciiz		"MIPS is awesome!"
	str2:	.asciiz		"The string length is: \n"
	length:	.word		0

.text

	la $t0, str1			# $t0 holds the string address
	li $t1, 0			# $t1 holds the character count
	la $a0, str2			# $a0 holds the second string
	li $v0, 4			# setting syscall 4
	syscall				# issuing the syscall
	
	
   loopTop:				# top of our loop
   	lb $t2, 0($t0)			# load the character at address $t0
   
   	bne $t2, $zero, notEqual	# jump to notEqual if things aren't equal
   	
   	# found our end of string
   	li $v0, 1			# setting syscall 1
   	move $a0, $t1			# copying the string length
   	syscall				# issuing the system call
   	
   	li $v0, 10			# setting syscall 10
   	sw $t1, length			# stores $t1 length into memory
   	syscall				# issuing the system call
   	
   	
  notEqual:
  	addi $t1, $t1, 1		# increment $t1
  	addi $t0, $t0, 1		# move to the next char
  	j loopTop			# jump to the top of the loop
