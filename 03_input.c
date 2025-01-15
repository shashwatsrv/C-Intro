#include <stdio.h>

int main(){
    int a, b;

    printf("Enter value of a\n");
    scanf("%d", &a); // scanf is used to take input from user and & is used to store the value of a in the address of a

    printf("Enter value of b\n");
    scanf("%d", &b);

    printf("Sum of a and b is %d\n", a + b); // corrected to printf
    return 0;
}

/*
cd C:/Users/HP/Desktop/C
gcc 3_input.c -o 3_input
./3_input
Use this in the terminal to run the code
*/
