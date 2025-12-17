int global;
char global_c;

int func();

int main () {

	int a1 = 1;
	enum  ss { s, f , sk} ff;
	struct df {
		int a;
		int c;
		char i;
	} *st;

	a2 = (int) func(); // undefined var
	st->b = 1; // undefined field
	gobal_c = (char)1; // typo
	return 0;
}

int func(){
	return 3;
}