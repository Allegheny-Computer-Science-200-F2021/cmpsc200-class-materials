.data
	endl: .asciiz "\n"
.text
	main:
		addi $s0, $zero, 10
		jal func

		li, $v0,4
		la, $a0,endl
		syscall

		li, $v0, 1
		la, $a0, 0($s0)
		syscall

		li, $v0,10
		syscall
	func:
		addi, $sp, $sp, -4
		sw, $s0, 0($sp)
		addi, $s0,$s0,20

		li, $v0, 1
		la, $a0, 0($s0)
		syscall

		lw, $s0, 0($sp) # restore
		addi, $sp,$sp,4
		jr $ra



