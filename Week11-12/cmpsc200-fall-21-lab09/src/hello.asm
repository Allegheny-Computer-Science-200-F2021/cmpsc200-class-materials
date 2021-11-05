.data
myMessage: .asciiz "Hello World \n"
.text
la $a0, myMessage
li $v0, 4
syscall
