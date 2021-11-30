     1	.data
     2	prompt: .asciiz "This program calculates Fibonacci sequence with recursive functions.\nEnter a non-negative number: "
     3	result: .asciiz "Fib of "
     4	result2: .asciiz " is "
     5	endl: .asciiz "\n"
     6	
     7	.text
     8	main:
     9	# Prompt user to input non-negative number
    10	la $a0,prompt   
    11	li $v0,4
    12	syscall
    13	
    14	li $v0,5    #Read the number(n)
    15	syscall
    16	
    17	move $t1,$v0    # n to $t2 for temp storage
    18	# Call function to get fibonnacci #n
    19	jal fib     #call fib (n)
    20	move $t2,$v0    #result is in $t2
    21	
    22	# Output message and n
    23	la $a0,result   #Print 
    24	li $v0,4
    25	syscall
    26	
    27	move $a0,$t1    #Print n
    28	li $v0,1
    29	syscall
    30	
    31	la $a0,result2  #Print =
    32	li $v0,4
    33	syscall
    34	
    35	move $a0,$t2    #Print the answer
    36	li $v0,1
    37	syscall
    38	
    39	la $a0,endl #Print '\n'
    40	li $v0,4
    41	syscall
    42	
    43	# End program
    44	li $v0,10
    45	syscall
    46	
    47	fib:
    48	# Compute and return fibonacci number
    49	beq $t1,0,zero   #if n=0 return 0
    50	beq $t1,1,one   #if n=1 return 1
    51	
    52	#Calling fib(n-1)
    53	sub $sp,$sp,4   #storing return address on stack
    54	sw $ra,0($sp)
    55	
    56	sub $t1,$t1,1   #n-1
    57	jal fib     #fib(n-1)
    58	add $t1,$t1,1
    59	
    60	lw $ra,0($sp)   #restoring return address from stack
    61	sw $v0,0($sp)
    62	
    63	
    64	#Calling fib(n-2)
    65	sub $sp,$sp,4   #storing return address on stack
    66	sw $ra,0($sp)
    67	
    68	sub $t1,$t1,2   #n-2
    69	jal fib     #fib(n-2)
    70	add $t1,$t1,2
    71	
    72	lw $ra,0($sp)   #restoring return address from stack
    73	add $sp,$sp,4
    74	#---------------
    75	lw $t3,0($sp)   #Pop return value from stack
    76	add $sp,$sp,4
    77	
    78	add $v0,$v0,$t3 # f(n - 2)+fib(n-1)
    79	jr $ra # decrement/next in stack
    80	
    81	zero:
    82	li $v0,0
    83	jr $ra
    84	one:
    85	li $v0,1
    86	jr $ra