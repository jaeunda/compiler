	      INT   0, 12
	      SUP   0, main
	      RET   0, 0
set:
	      INT   0, 16
	      LOD   1, 12
	     LITI   0, 1
	     LITI   0, 4
	     MULI   0, 0
	   OFFSET   0, 0
	     LITI   0, 99
	      STX   0, 0
	      POP   0, 1
	      RET   0, 0
main:
	      INT   0, 24
	      INT   0, 12
	      LDA   1, 12
	      POP   0, 4
	     ADDR   0, set
	      CAL   0, 0
	      RET   0, 0
