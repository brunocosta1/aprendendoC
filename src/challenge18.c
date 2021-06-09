#include <stdio.h>
#include <stdlib.h>

struct item{

    char *itemName;
    int quantity;
    float price;
    float amount; // quantity * price

};

void readItem(struct item *inputItem){

    printf("Put the item name: ");
    scanf("%s", inputItem->itemName);
    scanf("");

    printf("\nPut the quantity: ");
    scanf("%d", &inputItem->quantity);
    scanf("");

    printf("\nPut the price: ");
    scanf("%f", &inputItem->price);
    scanf("");

    inputItem->amount = (inputItem->price * inputItem->quantity);

}

void printItem(struct item *item1){

    printf("\nItem name: %s\n", item1->itemName);

    printf("Quantity: %d\n", item1->quantity);

    printf("Price: %.2f\n", item1->price);

    printf("Amount: %.2f\n", item1->amount);
}

int main(){

    struct item example, *ptrExample;

    ptrExample = &example;

    example.itemName = (char*)malloc(20 * sizeof(char));
    
    readItem(ptrExample);
    printItem(ptrExample);

    return 0;

}
