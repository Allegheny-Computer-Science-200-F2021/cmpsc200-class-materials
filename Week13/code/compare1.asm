.data
	first: .word 10
	second: .word 20
	lesser:   .asciiz	"first number is lesser than second\n"
.text
	lw $t0, first
	lw $t1, second
	blt $t0, $t1, print
	j exit
  print:
  	li $v0, 4
	la $a0, lesser
	syscall
	j exit
  exit:
	li $v0, 10
	syscall
