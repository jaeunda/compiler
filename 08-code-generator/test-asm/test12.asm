	      INT   0, 12
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 16
L3:
	      LOD   1, 12
	      LDA   1, 12
	      LDX   0, 0
	     INCI   0, 0
	      STO   0, 0
	      POP   0, 1
	      LOD   1, 12
	     LITI   0, 2
	     EQLI   0, 0
	      JPC   0, L4
	      JMP   0, L2
L4:
L2:
	      LOD   1, 12
	     LITI   0, 5
	     LSSI   0, 0
	      JPT   0, L3
L1:
	      RET   0, 0
