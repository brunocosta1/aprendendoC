#include <stdio.h>

void squareByItSelf(int *value){
    int aux = *value;
    for(int i = 0; i < aux - 1; i++)
        *value *= aux;
}
 
int main(){

    int a = 8;

    squareByItSelf(&a);

    printf("%d \n", a);

    return 0;
}
