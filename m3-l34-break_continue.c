#include <stdio.h>
#include <stdint.h>

#define TAB_SIZE 10

uint8_t tab[TAB_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main(){

    uint8_t i;
    
    printf("break statement example\n");
    for(i = 0; i < TAB_SIZE; i++){

        if(tab[i] == 4){

            break;  //breaking the loop when tab[i] is equal to 4
        }
        printf("tab[i] = %d\n", tab[i]);
    }

    printf("continue statement example\n");
    for(i=0; i < TAB_SIZE; i++){

        if(tab[i] == 4){

            continue;   //skipping the iteration of the loop when tab[i] is equal to 4
        }
        printf("tab[i] = %d\n", tab[i]);
    }

    return 0;

}

/*
result:
break statement example
tab[i] = 0
tab[i] = 1
tab[i] = 2
tab[i] = 3
continue statement example
tab[i] = 0
tab[i] = 1
tab[i] = 2
tab[i] = 3
tab[i] = 5
tab[i] = 6
tab[i] = 7
tab[i] = 8
tab[i] = 9
*/