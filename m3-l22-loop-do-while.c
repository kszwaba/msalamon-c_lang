#include <stdio.h>
#include <stdint.h>

#define LOOP_COUNT 5

uint8_t i;

int main(){

    printf("do-while loop started, i: %d\n", i);

    do{

        printf("Loop counter: %d\n", i); // This code wil execute at least once, even if the condition is false
        i++;

    }while((i > 0) && (i < LOOP_COUNT)); //this will always true bacause i is > 0 and less than LOOP_COUNT

    printf("do-while loop finished, i: %d\n", i);

    printf("iterator i initialisation to 0\n");
    i = 0;

    printf("while loop for comparison started, i: %d\n", i);

    while((i > 0) && (i < LOOP_COUNT)){ //this loop will NOT execute because i is 0 and the first condition is false

        printf("Loop counter: %d\n", i);
        i++;
    }
    
    printf("while loop for comparision finished, i: %d\n", i);

    return 0;
}