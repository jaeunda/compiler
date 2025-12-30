	      INT   0, 12
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 20
	      LOD   1, 12
	     LITI   0, 5
	     GTRI   0, 0
	     JPCR   0, L1
	      LOD   1, 16
	      LDA   1, 16
	      LDX   0, 0
	     INCI   0, 0
	      STO   0, 0
	     LITI   0, 5
	     GTRI   0, 0
L1:
	      JPC   0, L2
	      LDA   1, 12
	     LITI   0, 1
	      STX   0, 0
	      POP   0, 1
L2:
	      RET   0, 0
