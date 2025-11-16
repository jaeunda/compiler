int main() {
    int x = 0, i;
    
    for (i = 0; i < 10 ; i++)
        x = x+i;

    if (x  > 10)
        x = 20;
    else 
        x = 30;
   
    while (i > 0) {
        i--;
        if (i== 2) break;
    }
    return x;
}