.data
	str:	.asciiz		"Computer Organization"
.text
	la $t0, str
	loop:				
   	lb $t1, 0($t0)		
   	bne $t1, $zero, inc	
    la $a0, ($t2)
    li $v0, 11,  
    syscall     

    li $v0, 10	
   	syscall			
  inc:
  	move $t2, $t1
    addi $t0, $t0, 1
  	j loop

