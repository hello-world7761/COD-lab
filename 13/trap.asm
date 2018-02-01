xor $t1, $t1, $t1
xor $t2, $t2, $t2
addi $t1, $zero, 2
addi $t2, $zero, 1
sub $t1, $t1, $t2
teq $t1, $t2