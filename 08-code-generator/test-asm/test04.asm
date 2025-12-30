	      INT   0, 12
	      SUP   0, main
	      RET   0, 0
add:
	      INT   0, 20
	      LDA   1, -4
	      LOD   1, 12
	      LOD   1, 16
	     ADDI   0, 0
	      STO   0, 0
	      RET   0, 0
	      RET   0, 0
main:
	      INT   0, 16
	      LDA   1, 12
	      INT   0, 16
	     LITI   0, 10
	     LITI   0, 20
	      POP   0, 5
	     ADDR   0, add
	      CAL   0, 0
	      STX   0, 0
	      POP   0, 1
	      RET   0, 0
