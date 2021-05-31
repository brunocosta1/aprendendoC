#include <stdio.h>

int main(){

    int num = 13, *pnum = NULL;

    pnum = &num;

    printf("Address of pointer: %p\n", &pnum);
    printf("Value of pointer: %p\n", pnum);
    printf("Value of what pointer is pointing to: %d\n", *pnum);

    return 0;
}
