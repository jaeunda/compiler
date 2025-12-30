	      INT   0, 20
	      SUP   0, main
	      RET   0, 0
main:
	      INT   0, 16
	      LDA   1, 12
	      LDA   0, 12
	      STX   0, 0
	      POP   0, 1
	      RET   0, 0
.literal    12   "Hello"
