.data
	input:	.asciiz		"Computer"
	output:	.asciiz		"The output is: \n"
.text
	la $t0, input
	li $t1, 0			
	
  la $a0, output	
	li $v0, 4			
	syscall				
	
  loop:	
   	lb $t2, 0($t0)	
    bne $t2, $zero, exit
   	
    li $v0, 1	
   	move $a0, $t1	
   	syscall		
   	
   	li $v0, 10	
   	syscall			
   	
   exit:
  	addi $t1, $t1, 1
  	addi $t0, $t0, 1
  	j loop

