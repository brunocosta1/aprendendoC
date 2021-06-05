#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 0;
    char *str = NULL, temp;

    printf("Put the number of characters:\n");
    scanf("%d", &n);

    str = (char*)malloc(n * sizeof(char)); 

    if(str != NULL){
        printf("Put the text string:\n");
        scanf(" "); //clear buffer
        scanf("%[^\n]s", str);

        printf("String: %s\n", str);
    }

    free(str);

    return 0;

}
