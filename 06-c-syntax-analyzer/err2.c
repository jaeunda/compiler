int a = 3;
char g_c = (char) 3;

void main() {

    switch (a) {
        case 1:
            g_c = 'z';
        case 2:
            g_c = 's';
        case 3:
            a = 2;
        default:
            a++;
    }

    int x , y = 2;
}