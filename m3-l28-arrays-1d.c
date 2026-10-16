#include <stdio.h>
#include <stdint.h>

#define TAB_SIZE 16

uint8_t tab[TAB_SIZE];

int main(){

    uint8_t i;
    printf("Tablice jednowymiarowe \n");

    for(i = 0; i < TAB_SIZE; i++){

        tab[i] = i;
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    return 0;

}