int arr[5];
void main() {
   int *p;
   arr[2] = 10;
   p = &arr[1];
   *(p + 1) = 20;
}