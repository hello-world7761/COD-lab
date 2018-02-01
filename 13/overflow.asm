xor $t1, $t1, $t1
xor $t2, $t2, $t2
xor $t3, $t3, $t3
addi $t1, $t1, -1
addi $t2, $zero, -2
add $t3, $t1, $t2 #t3 is -3,not overflow
addu $t4, $t1, $t1 #overflow
      