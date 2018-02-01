addi $t1, $zero, 1
ori $t1, $t1, 1
xori $t1, $t1, 0
addiu $t2, $zero, 2
addi $t3, $zero, -1
addi $t4, $zero, 4
sll $t5, $t4, 1			#t5 is 8
sllv $t6, $t4, $t1		#t6 is 8
srl $t7, $t3 ,2		#t7 is big number
srlv $t6, $t6, $t2		#t6 is 2
sra $t4, $t3, 2			#t4 is -1
srav $t3, $t3, $t2		#t3 is equal to t4
sub $t2, $t2, $t1		#t2 is 1
lui $t1, 1			#t1 is a big number
never:
	j never

