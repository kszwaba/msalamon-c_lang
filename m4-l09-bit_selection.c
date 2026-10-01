#include <stdio.h>
#include <stdint.h>

uint8_t Var = 0b00000000;
uint8_t VarDefs;

#define BIT0 (1<<0)  // bit 0
#define BIT1 (1<<1)  // bit 1
#define BIT2 (1<<2)  // bit 2
#define BIT3 (1<<3)  // bit 3
#define BIT4 (1<<4)  // bit 4
#define BIT5 (1<<5)  // bit 5
#define BIT6 (1<<6)  // bit 6
#define BIT7 (1<<7)  // bit 7

int main(){

    printf("Var before settings bits:\n");
    for (int i = 7; i >= 0; i--){
        printf("%d", (Var >> i) & 1);   // right shift by i bit and AND operation with 1 to get the value of the bit at position i 
    }
    printf("\n");

    Var = (1<<0) | (1<<4);

    printf("Var after settings bits on positions 0 (1<<0) and 4 (1<<4):\n");
    for (int i = 7; i>= 0; i--){
        printf("%d", (Var >> i) & 1);   // right shift by i bit and AND operation with 1 to get the value of the bit at position i 
    }
    printf("\n");

    printf("VarDefs before settings bits:\n");
    for (int i = 7; i >= 0; i--){
        printf("%d", (VarDefs >> i) & 1);   // right shift by i bit and AND operation with 1 to get the value of the bit at position i 
    }
    printf("\n");

    VarDefs = BIT0 | BIT2 | BIT4 | BIT6; // setting bits on positions 0, 2, 4, and 6 using defined macros
    
    printf("VarDefs after settings bits on positions 0, 2, 4, 6 using defined macros (VarDefs = BIT0 | BIT2 | BIT4 | BIT6):\n");
    for (int i = 7; i >= 0; i--){
        printf("%d", (VarDefs >> i) & 1);   // right shift by i bit and AND operation with 1 to get the value of the bit at position i
    }
    printf("\n");

    return 0;
}