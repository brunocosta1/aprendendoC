#include <stdio.h>
#include <stdbool.h>


int countCharacters(char word[]){
    int length = 1;

    while(word[length] != '\0'){
        length++;
    }

    return length;
}

void concatenateStrings(char str1[], char str2[], char result[]){


    for(int i = 0; i < countCharacters(str1); i++){
        if(str1[i] != '\n')
                result[i] = str1[i];
    }

    for(int i = 0; i < countCharacters(str2); i++){
        if(str2[i] != '\n')
            result[countCharacters(str1)+i] = str2[i];
    }
}

bool isEqual(char str1[], char str2[]){

    if(countCharacters(str1) != countCharacters(str2))
        return false;

    int i = 0, verification = 0;

    while(i < countCharacters(str1) && verification == 0){ //Could be str2
        
        if(str1[i] == str2[i])
            i++;
        else
            verification++;
    }

    if(verification == 0)
        return true;
    else
        return false;
    
}

int main(){

    char word1[10], word2[10], result[20];

    printf("Put a word: \n");
    /*scanf("%[^\n]s", word1);*/
    fgets(word1, 10, stdin);
    printf("Put a word: \n");
    /*scanf("%[^\n]s", word2);*/
    fgets(word2, 10, stdin);

    concatenateStrings(word1, word2, result);
    
    printf("%d\n", isEqual(word1, word2)); // 0 to false, 1 to true

    printf("%s\n", result);

    return 0;
}
