# goal2: is to display the characters in that string (both based on the alphabet, ascii code).
# goal3: is to display the ascii values in that string (both based on the alphabet, 

.data
	str:	.asciiz		"DAD" # .asciiz is the data type for strings
  nl:  .asciiz   "\n"
.text
	la $t0, str			# $t0 holds the string address t0  = first character 
  loopTop:				# top of our loop
   	lb $t1, 0($t0)			# load the character at address $t0
   	bne $t1, $zero, notEqual	# jump to notEqual if things aren't equal
   	li $v0, 10			# setting syscall 10
   	syscall				# issuing the system call
  
  notEqual:
  	addi $t0, $t0, 1		# move to next char
    # print the character one at a time 
  	la $a0, ($t1)     # $a0 holds the second string
    li $v0, 1     # printing integer
    syscall       # issuing the syscall

    # print the newline
    la $a0, nl     # $a0 holds the second string
    li $v0, 4     # printing string
    syscall       # issuing the syscall

    j loopTop			# jump to the top of the loop
