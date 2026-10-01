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
    
    printf("One bits checking in register\n");
    if(RegisterToCheck & (1 << 3)){
        printf("Bit on position 3 is set\n");
    }
    else{
        printf("Bit on position 3 is not set\n");
    }
    printf("\n");

    printf("Multiple bits checking in register by OR operator\n");
    if(RegisterToCheck & ((1 << 3) | (1 << 5))){
        printf("Bit on position 3 OR 5 is set\n");
    }
    else{
        printf("Bit on position 3 OR 5 is not set\n");
    }
    printf("\n");

    printf("Multiple bits checking in register by AND operator\n");
    if((RegisterToCheck & ((1 << 3)) && (RegisterToCheck & (1 << 5)))){ // && instead of & operator is required to check if both bits are set
        printf("Bit on position 3 AND 5 is set\n");
    }
    else{
        printf("Bit on position 3 AND 5 is not set\n");
    }
    printf("\n");

    return 0;
}

/*
console output:

One bits checking in register
RegisterToCheck in HEX: 0x28
RegisterToCheck in BIN: 0b00101000
Bit on position 3 is set

One bits checking in register
RegisterToCheck in HEX: 0x01
RegisterToCheck in BIN: 0b00000001
Bit on position 3 is not set

Multiple bits checking in register by OR operator
Bit on position 3 OR 5 is set

Multiple bits checking in register by AND operator
Bit on position 3 AND 5 is not set

*/