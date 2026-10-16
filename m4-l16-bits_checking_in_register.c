#include <stdio.h>
#include <stdint.h>

int main(){

    uint8_t RegisterToCheck = 0x28; // 00101000 in binary
    printf("RegisterToCheck in HEX: 0x%02X\n", RegisterToCheck);
    printf("RegisterToCheck in BIN: 0b");
    for(int i = 7; i >= 0; i--){
        printf("%d", (RegisterToCheck >> i) & 1 );
    }
    printf("\n\n");
    
    // Checking if one bit is set in RegisterToCheck
    printf("Checking if one bit is set in RegisterToCheck\n");
    if(RegisterToCheck & (1 << 3)){
        printf("Bit on position 3 is set\n");
    }
    else{
        printf("Bit on position 3 is not set\n");
    }
    printf("\n");

    // Checking if either of the bits is set in RegisterToCheck.
    printf("Checking if either of the bits is set in RegisterToCheck by OR operator\n");
    if(RegisterToCheck & ((1 << 3) | (1 << 5))){
        printf("Bit on position 3 OR 5 is set\n");
    }
    else{
        printf("Bit on position 3 OR 5 is not set\n");
    }
    printf("\n");

    // Checking if both bits are set in RegisterToCheck.
    printf("Checking if both bits are set in RegisterToCheck by AND operator\n");
    if((RegisterToCheck & ((1 << 3)) && (RegisterToCheck & (1 << 5)))){ // && instead of & operator is required to check if both bits are set
        printf("Bit on position 3 AND 5 is set\n");
    }
    else{
        printf("Bit on position 3 AND 5 is not set\n");
    }
    printf("\n");

    // Checking if any of the bits are cleared in RegisterToCheck.
    printf("Checking if any of the bits are cleared in RegisterToCheck by AND operator\n");
    if(!(RegisterToCheck & (1 << 3)) && (RegisterToCheck & (1 << 5))){ // && instead of & operator is required to check if any of the bits are cleared
        printf("Any of the bits on position 3 or 5 is cleared\n");
    }
    else{
        printf("None on only one of the bits on position 3 or 5 is cleared\n");
    }
    printf("\n");

    // Checking if both bits are cleared in RegisterToCheck.
    printf("Checking if both bits are cleared in RegisterToCheck by AND operator\n");
    if(!(RegisterToCheck & ((1 << 3) | (1 << 5)))){ // If both bits are cleared, then the result of !AND operation will be 1
        printf("Both bits on position 3 and 5 are cleared\n");
    }
    else{
        printf("Both bits on position 3 and 5 are not cleared\n");
    }

    

    return 0;
}

/*
console output:

Checking if one bit is set in RegisterToCheck
RegisterToCheck in HEX: 0x28
RegisterToCheck in BIN: 0b00101000
Bit on position 3 is set

Checking if either of the bits is set in RegisterToCheck
RegisterToCheck in HEX: 0x01
RegisterToCheck in BIN: 0b00000001
Bit on position 3 is not set

Checking if either of the bits is set in RegisterToCheck by OR operator
Bit on position 3 OR 5 is set

Checking if both bits are set in RegisterToCheck by AND operator
Bit on position 3 AND 5 is not set

Checking if any of the bits are cleared in RegisterToCheck by AND operator
Any of the bits on position 3 or 5 is cleared

Checking if both bits are cleared in RegisterToCheck by AND operator
Both bits on position 3 and 5 are not cleared

*/