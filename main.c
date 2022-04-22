#include <stdio.h>
int cardDeck[52];
int deckSize = 52;

/*typedef struct node{

    char faceValue[3];
    char suit[10];
    struct node * next;

}; card; */

void LD(char file[]){

    FILE *filePointer;
    filePointer = fopen (file,"r");

    if(!filePointer){
        printf("Wrong file\n");
    }

    for (int i = 0; i < deckSize ; ++i) {

        fscanf(filePointer,"%c\n",&cardDeck[i]);
        printf("%c\n", cardDeck[i]);

    }

}

void main() {

    LD("CardDeck.txt");

}
