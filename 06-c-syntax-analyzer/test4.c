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

	a1 = (int) func();
	st->a = 1;
	global_c = (char)1;	
	return 0;
}

int func(){
	return 3;
}