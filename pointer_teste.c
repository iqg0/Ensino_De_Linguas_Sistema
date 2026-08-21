#include <stdio.h>

int main(){

    int x = 10;

    int *ptr = &x; // pointer declaration syntax 

    printf("Pointer: %d\n", *ptr);
    printf("x = %p\n", &x); // %p = format specifier for pointer adddress 
                          // &x = where x happen to be stored on the first run and the subsequencial ones



    *ptr = 20;

    printf("X after: %d", x);


    return 0;
}