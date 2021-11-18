.data
	first: .word 20
	second: .word 20
	lesser:   .asciiz	"first number is lesser than second\n"
	greater:   .asciiz	"first number is greater than second\n"
	equalto:   .asciiz	"first number is equal to the second\n"
.text
	lw $t0, first
	lw $t1, second
	blt $t0, $t1, print1
	bgt $t0, $t1, print2
	beq $t0, $t1, print3
	j exit
  print1:
  	li $v0, 4
	la $a0, lesser
	syscall
	j exit
  print2:
  	li $v0, 4
	la $a0, greater
	syscall
	j exit
  print3:
  	li $v0, 4
	la $a0, equalto
	syscall
	j exit
  
  exit:
	li $v0, 10
	syscall
