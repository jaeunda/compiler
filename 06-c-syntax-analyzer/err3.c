int func1(int pr);
void func2();
char func3();

void main(){
    int i = 16;
    char c;
    char str[i+1];

    char *s = "string";

    int a = func1();
    c = func2(); // return type unmatched
    func3();
}
int func1() {return 1;}
void func2() {}
char func3() {
    return 's';
}