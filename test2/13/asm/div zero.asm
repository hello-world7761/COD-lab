addi $t1, $zero, 1
xor $t2, $t2, $t2
addi $t3, $zero, 3
div $t4, $t3, $t1 # t4 is 3
div $t5, $t3, $t2 #overflow
