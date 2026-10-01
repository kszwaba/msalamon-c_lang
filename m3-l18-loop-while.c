#include <stdio.h>
#include <stdint.h>

uint8_t i;

#define LOOP_COUNT 5

int main(){

    printf("Hello world\n");

    while(i < LOOP_COUNT){

        printf("i: %d\n", i); //this code will NOT execute if the condition is false initially
        i++;
    }

    return 0;
    }