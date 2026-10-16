#include <stdio.h>
#include <stdint.h>

int main(){

    printf("Hello World \n");

    uint8_t i,j;
    uint8_t LOOP_COUNT = 5;
    
    for(i = 0; i < LOOP_COUNT; i++){

        printf("i: %d\n",i);
        for(j = 0; j < LOOP_COUNT; j++){

            printf("j:%d ", j);
        }
        printf("\n\n");

    }

    printf("LCD display example\n");
    #define LCD_ROWS 32
    #define LCD_COLS 16

    for(i = 0; i < LCD_COLS; i++){

        printf("Row: %02d ", i);
        for(j = 0; j < LCD_ROWS; j++){

            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
FOR loop is used to execute a block of code a specific number of times. 
Is optimised for iteration and is often used when the number of iterations is known beforehand.
It consists of three parts: initialization, condition, and increment/decrement. 
The loop will continue to execute as long as the condition is true.

general syntax of a for loop in C is as follows:
for (initialization; condition; increment/decrement) {
    // Code to be executed in each iteration
}

*/