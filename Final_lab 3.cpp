//Bismillahir Rahmanir Rahim
#include <stdio.h>

void sw1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void sw2(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int val1 = 10, val2 = 20;

    printf("Before swap values are = %d %d\n",val1,val2);

    sw1(val1, val2);
    printf("Swap by value = %d , %d\n", val1, val2);

    sw2(&val1, &val2);
    printf("Swap by reference = %d , %d\n", val1, val2);

    return 0;
}
