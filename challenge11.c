#include <stdio.h>

int countCharacters(char word[]){
    int length = 0;

    while(word[length] != '\0'){
        length++;
    }

    return length;
}


int main(){

    char word[10];

    printf("Put a word: \n");
    scanf("%[^\n]s", word);

    printf("%d characters.\n", countCharacters(word));

    return 0;
}
