#include <stdio.h>

int stringLength(const char *ptr){
    
    const char *auxPtr = ptr;

    while(*auxPtr)
        ++auxPtr;
    
    return (auxPtr - ptr);
}

int main(){

    char name[] = "Bruno Costa";

    printf("Length of name: %d\n", stringLength(name)); 

    return 0;
}
