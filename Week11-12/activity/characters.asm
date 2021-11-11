.data
	str:	.asciiz		"MIPS is awesome!"
	nl: .asciiz "\n"
.text

	la $t0, str			# $t0 holds the string address
	loopTop:				# top of our loop
    lb $t2, 0($t0)			# load the character at address $t0
    bne $t2, $zero, notEqual	# jump to notEqual if things aren't equal
   	
   	li $v0, 10			# setting syscall 10
   	syscall				# issuing the system call
   	
   	
  notEqual:
  	li $v0, 1  # printing characters
    la $a0, ($t2)
    syscall

    li $v0, 4  # printing newline
    la $a0, nl
    syscall

    addi $t0, $t0, 1    # move to the next char
  	j loopTop			# jump to the top of the loop
