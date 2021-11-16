.data
  out: .float 10.2456
.text
  li $v0, 2
  lwc1 $f12, out
  syscall
  
  # exit
  li $v0, 10
	syscall
