#include <stdio.h>

void swapping  (int *ptr1, int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {

    int x = 5;
    int y = 10;
    int *p;
    p = &x;  //* used to declare pointer variable which store address of x

    printf("The value of x: %d, \n the address of x is: %p \n", x, &x);
    printf("The address of p: %p, \nThe address stored in p is: %p \n", &p, p);
    printf("The content of p: %d \n", *p);

    //ampersand (&) is a symbol in English to print address in c lang

    p = &y;  // single pointer multiple use;
    printf("The content of p: %d \n", *p);

    //swapping by pointer
    swapping (&x, &y);
    printf("\nAfter swapping \n");
    printf("The value of x: %d,\nThe value of y: %d, \n", x, y);

    //accessing array elements by pointer
    int a [5] = {1,2,3,4,5};
    int *ptr,i;
    ptr= &a[0];
    printf("\nArray element access by pointer\n");
    for (i=0; i<5; i++)
    {
        printf("%d \n", *ptr);
        ptr++;
    }

    return 0;
}

