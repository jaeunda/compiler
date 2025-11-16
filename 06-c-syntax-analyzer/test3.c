int func1();
void func2();
char func3();

void main(){
    int i = 16;
    char c;
    char str[i+1];

    char *s = "string";

    int a = func1();
    func2();
    c = func3();
}
int func1() {return 1;}
void func2() {}
char func3() {
    return 's';
}