#include <stdio.h>
#include <stdint.h>

uint8_t Danger;

int main() {

    Danger = 23;
    printf("Danger: %d\n\n", Danger);

    printf("IF-ELSE statement example\n");
    //classic if-else statement is used to perform different actions based on different conditions.
    if(Danger == 19) {
        printf("Danger is 19\n");
    } 
        else if(Danger == 20){
            printf("Danger is 20\n");
        }
            else if(Danger == 21){
                printf("Danger is 21\n");
            }
                else {
                    printf("Danger is other than 19 or other than 20 or other than 21\n");
                }

/*  
Switch statement is used to perform different actions based on different conditions. 
Is often used when there are multiple possible values for a variable and you want to execute different code for each value. 
It is more efficient than using multiple if-else statements in some cases.
Example of a switch statement in C is as follows:
switch (variable) {
    case value1:
        // Code to be executed if variable == value1
        break;
    case value2:
        // Code to be executed if variable == value2
        break;
    // You can have any number of case statements.
    default:
        // Code to be executed if variable doesn't match any case
}
*/  

printf("\nSWITCH statement example\n");
switch(Danger){
    case 19:
        printf("Danger is 19\n");
        break;
    case 20:
        printf("danger is 20\n");
        break;
    case 21:
        printf("danger is 21\n");
        break;
    default:
        printf("Danger is other than 19 or other than 20 or other than 21\n");
    }

    return 0;
}