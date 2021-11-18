.data
	endl: .asciiz "\n"
.text
	main:
		addi $s0, $zero, 10
		addi $s1, $zero, 20
		jal func

		li, $v0,4
		la, $a0,endl
		syscall

		li, $v0, 1
		la, $a0, 0($s0)
		syscall

		li, $v0,4
		la, $a0,endl
		syscall

		li, $v0, 1
		la, $a0, 0($s1)
		syscall


		li, $v0,10
		syscall
	func:
		addi, $sp, $sp, -8
		sw, $s0, 0($sp)
		sw, $s1, 4($sp)
		move $t1, $s0
		move $s0, $s1
		move $s1, $t1

		li, $v0, 1
		la, $a0, 0($s0)
		syscall

		li, $v0,4
		la, $a0,endl
		syscall

		li, $v0, 1
		la, $a0, 0($s1)
		syscall

		lw, $s0, 0($sp) # restore
		lw, $s1, 4($sp) # restore
		addi, $sp,$sp,8
		jr $ra



