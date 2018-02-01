.data
temp: .word 3 -1
fibs: .word   0 : 20  
.text
addi $t1, $zero, 1
addi $t2, $zero, 2
addi $t3, $zero, -1
addi $t4, $zero, 4
slt $t1, $t2, $t3		#t1 is 0
sltu $t7, $t2, $t3		#t7 is 1
slti $t6, $t2, 3		#t6 is 1
sltiu $t5, $t3, 1		#t5 is 0
la $t0, temp
lb $t1, 4($t0)
lbu $t2, 4($t0)
lh $t3, 4($t0)
lhu $t4, 4($t0)
la $t0, fibs
sb $t1, 0($t0)
sh $t3, 4($t0)
here:
	beq $t6, $t7, there	#daed loop
	addi $t5, $t5, 1	#no use
there:	
	bgez $t5, next
	addi $t5, $t5, 1	#no use
next:   
	blez $t1, dead
	addi $t5, $t5, 1	#no use
dead:	
	bltz $t1, dead
	addi $t5, $t5, 1	#no use