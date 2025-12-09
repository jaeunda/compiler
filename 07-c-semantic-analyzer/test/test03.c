struct Node {
    int value;
    char *str;
};
int main() {
    struct Node a;
    a.value = 10;
    a.str = 0;
    return a.value;
}