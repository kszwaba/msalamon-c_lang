#include <stdio.h>
#include <stdint.h>

uint8_t ValueDec = 178;
uint8_t ValueBin = 0b10110010;
uint8_t ValueHex = 0xB2;

int main(){

    printf("ValueDec = %d\n", ValueDec);
    printf("ValueDec = 0x%x\n", ValueDec);
    printf("ValueDec = 0x%X\n", ValueDec);

    printf("\n");

    printf("ValueBin = %d\n", ValueBin);
    printf("ValueBin = 0x%x\n", ValueBin);
    printf("ValueBin = 0x%X\n", ValueBin);

    printf("\n");

    printf("ValueHex = %d\n", ValueHex);
    printf("ValueHex = 0x%x\n", ValueHex);
    printf("ValueHex = 0x%X\n", ValueHex);

    return 0;
}

/*
console output:

ValueDec = 178
ValueDec = 0xb2
ValueDec = 0xB2

ValueBin = 178
ValueBin = 0xb2
ValueBin = 0xB2

ValueHex = 178
ValueHex = 0xb2
ValueHex = 0xB2
*/
