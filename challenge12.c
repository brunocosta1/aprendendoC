#include <stdio.h>
#include <string.h>
void showStringInverse(char str1[]){

    int length = strlen(str1);
    char aux[length];

    for(int i = 0; i < length; i++)
        aux[i] = str1[length-i-1];

    printf("%s\n", aux);

}

void bubbleSortString(int n, char strings[n][10]){



    char aux[10];

    


    /*Sort*/
    
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(strcmp(strings[j], strings[j+1]) > 0){
                strcpy(aux, strings[j]);
                strcpy(strings[j], strings[j+1]);
                strcpy(strings[j+1], aux);
            }
        }
    }
    

    /*Output*/

    for(int i = 0 ; i < n ; i++)
        printf("%s\n", strings[i]);

}

int main(){

    char word1[10], word2[10];
    int n = 0;

    printf("Input number of strings: ");
    scanf("%d", &n);
    
    char strings[n][10];

    for(int i = 0; i < n; i++){
        printf("Input the string %d:", i+1);
        scanf("%s", strings[i]);
        /*fgets(strings[i], 10, stdin);*/
        fflush(stdin);
    }
    /*fgets(word1, 10, stdin);*/

    /*showStringInverse(word1);*/

    bubbleSortString(n, strings);
    return 0;

}
