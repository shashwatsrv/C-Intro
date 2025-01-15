#include <stdio.h>

int main() {
    int a = 3, b = 4;
    printf("Area of rectangle is %d\n", a * b);

    int length, breadth;
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter breadth: ");
    scanf("%d", &breadth);
    printf("Area of rectangle is %d\n", length * breadth);

    return 0;
}
/*
cd C:/Users/HP/Desktop/C
gcc 4_practice.c -o 4_practice
./4_practice
*/