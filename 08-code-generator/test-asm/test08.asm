	      INT   0, 12
	      SUP   0, main
	      RET   0, 0
fact:
	      INT   0, 16
	      LOD   1, 12
	     LITI   0, 1
	     EQLI   0, 0
	      JPC   0, L1
	      LDA   1, -4
	     LITI   0, 1
	      STO   0, 0
	      RET   0, 0
L1:
	      LDA   1, -4
	      LOD   1, 12
	      INT   0, 16
	      LOD   1, 12
	     LITI   0, 1
	     SUBI   0, 0
	      POP   0, 4
	     ADDR   0, fact
	      CAL   0, 0
	     MULI   0, 0
	      STO   0, 0
	      RET   0, 0
	      RET   0, 0
main:
	      INT   0, 16
	      LDA   1, 12
	      INT   0, 16
	     LITI   0, 5
	      POP   0, 4
	     ADDR   0, fact
	      CAL   0, 0
	      STX   0, 0
	      POP   0, 1
	      RET   0, 0
