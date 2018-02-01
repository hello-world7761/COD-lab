 .data
fibs: .word   0 : 20        # "array" of  20 words to contain fib values
size: .word  20             # size of "array" 
temp: .word 3 3
      .text
      la   $t0, fibs        # load address of array
      la   $t5, size        # load address of size variable
      lw   $t5, 0($t5)      # load array size
      la   $t3, temp	    # load 
      lw   $t3, 0($t3)
      la   $t4, temp
      lw   $t4, 4($t4)

      sw   $t3, 0($t0)      # F[0] = $t3
      sw   $t4, 4($t0)      # F[1] = $t4
      addi $t1, $t5, -2     # Counter for loop, will execute (size-2) times
loop: lw   $t3, 0($t0)      # Get value from array F[n] 
      lw   $t4, 4($t0)      # Get value from array F[n+1]
      add  $t2, $t3, $t4    # $t2 = F[n] + F[n+1]
      sw   $t2, 8($t0)      # Store F[n+2] = F[n] + F[n+1] in array
      addi $t0, $t0, 4      # increment address of Fib. number source
      addi $t1, $t1, -1     # decrement loop counter
      bgtz $t1, loop        # repeat if not finished yet.
      #until now sw lw add addi j bgtz is ok(6)  
	andi $t1, $t1, 0	#clear t1 andi
	and  $t2, $zero, $t2	#clear t2 and
	addi $t1, $t1, 13
	addi $t2, $t2, 1
	sub $t3, $t1, $t2	#t3 is 12 sub
	or $t4, $t1, $t2	#t4 is 13 or
	nor $t5, $t1, $t2	#t5 is -14 nor
	xor $t6, $t1, $t2	#t6 is 12 xor
	addu $t7, $t4, $t2	#t7 is 14 addu
	subu $t4, $t4, $t4	#t4 is 0 subu
	#add $t4, $zero, $zero
	bne $t4, $zero, never	#bne test goto the dead loop if work well
out:
	la $t0, never
	jr $t0
	addi $t5, $zero, 1
	#j out	
never:	
	j out
