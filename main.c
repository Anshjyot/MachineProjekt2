#include <stdio.h>
#include <stdbool.h>

int main(){

    char c[2];

    printf("Command: ");
    c[0] = getchar();
    c[1] = getchar();
    printf("Character entered: ");
    putchar(c[0]);
    putchar(c[1]);


}

/*bool sameFace(card1,card2){
    if (card1face == card2face){
        return true;
    }
    else {
        return false;
    }
}
bool isSuitable(card1,card2){
    if (card1number = card2number + 1){
        return true;
    }
    else{
        return false;
    }
}*/