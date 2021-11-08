.data

prompt1:    .asciiz      "Enter the first number: "
prompt2:    .asciiz      "Enter the second number: "
newline:    .asciiz      "\n"

result:     .asciiz      "Final result is: \n"

.text
.globl main
  main:
  # prompt the first number
  li $v0, 4
  la $a0, prompt1
  syscall

  # read the first number
  li $v0, 5
  syscall
  move $t0, $v0

  # prompt the second number
  li $v0, 4
  la $a0, prompt2
  syscall


  # read the second number
  li $v0, 5 # scanf("%d")
  syscall
  move $t1, $v0

  add $t2, $t0, $t1    # add $t0 and $t1 and to $t7
  sub $t3, $t0, $t1  # t3 = t0 - t1

   # print the result message
   li $v0, 4
   la $a0, result
   syscall

   # print the result
   li $v0,1
   la $a0, ($t2)
   syscall

    # display the newline
    li $v0, 4
    la $a0, newline
    syscall

   # print the result
   li $v0,1
   la $a0, ($t3)
   syscall

   li $v0, 10
	 syscall
