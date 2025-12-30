	      INT   0, 12
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 20
	      LDA   1, 12
	     LITI   0, 1
	      STX   0, 0
	      POP   0, 1
L2:
	      LOD   1, 12
	     LITI   0, 3
	     LEQI   0, 0
	      JPC   0, L3
	      LDA   1, 16
	      LOD   1, 16
	      LOD   1, 12
	     ADDI   0, 0
	      STX   0, 0
	      POP   0, 1
L1:
	      LOD   1, 12
	      LDA   1, 12
	      LDX   0, 0
	     INCI   0, 0
	      STO   0, 0
	      POP   0, 1
	      JMP   0, L2
L3:
	      RET   0, 0
