#include <stdio.h>
#include <stdint.h>

int main(){

    printf("Read given bits \n");

    uint8_t ctrl_meas = 0x4B; // register value 0b01001011 in binary
    printf("Register ctrl_meas value in HEX: 0x%02X\n", ctrl_meas);
    printf("Register ctrl_meas value in BIN: 0b");
    for(int i = 7; i >= 0; i--){
        printf("%d", (ctrl_meas >> i) & 1);
    }
    printf("\n");
    printf("from register ctrl_meas: 0b010|010|11; 2,3,4 bits are the bits we want to read from the register \n");
    printf("is need to set mask to 0b00011100 to read the bits we want \n");
    printf("mask value equal to 0b00011100 in HEX: 0x%02X\n\n", 0x1C);
    
    uint8_t mask = 0x1C; // mask value 0b00011100 in binary

    printf("apply mask to read the bits we want by: ctrl_meas = ctrl_meas & mask \n");
    ctrl_meas = ctrl_meas & mask; // apply mask to read the bits we want
    
    printf("After applying mask, ctrl_meas value in HEX: 0x%02X\n", ctrl_meas);
    printf("After applying mask, ctrl_meas value in BIN: 0b");
    for(int i = 7; i >= 0; i--){
        printf("%d", (ctrl_meas >> i) & 1);
    }
    printf("\n");
    printf("2, 3, 4 bits are unchanged, but the other bits are set to 0 \n");
    printf("\n");

    uint8_t shift = 2; // number of bits to shift right to get the desired bits in the least significant position
    printf("shift the bits to the right by %d by: ctrl_meas = ctrl_meas >> shift to get the desired bits in the least significant position \n", shift);
    ctrl_meas = ctrl_meas >> shift; // shift the bits to the right by 2 to get the desired bits in the least significant position

    printf("After shifting, ctrl_meas value in HEX: 0x%02X\n", ctrl_meas);
    printf("After shifting, ctrl_meas value in BIN: 0b");
    for(int i = 7; i >= 0; i--){
        printf("%d", (ctrl_meas >> i) & 1);
    }
    printf("\n");
    printf("Now the 2, 3, 4 bits are in the least significant position and the other bits are set to 0 \n");
    printf("The value of the bits we want to read from the register is: 0b000|000|10 in binary and 0x02 in HEX \n");

    return 0;
}

/*
console output:

Read given bits 
Register ctrl_meas value in HEX: 0x4B
Register ctrl_meas value in BIN: 0b01001011
from register ctrl_meas: 0b010|010|11; 2,3,4 bits are the bits we want to read from the register 
is need to set mask to 0b00011100 to read the bits we want 
mask value equal to 0b00011100 in HEX: 0x1C

apply mask to read the bits we want by: ctrl_meas = ctrl_meas & mask 
After applying mask, ctrl_meas value in HEX: 0x08
After applying mask, ctrl_meas value in BIN: 0b00001000
2, 3, 4 bits are unchanged, but the other bits are set to 0 

shift the bits to the right by 2 by: ctrl_meas = ctrl_meas >> shift to get the desired bits in the least significant position 
After shifting, ctrl_meas value in HEX: 0x02
After shifting, ctrl_meas value in BIN: 0b00000010
Now the 2, 3, 4 bits are in the least significant position and the other bits are set to 0 
The value of the bits we want to read from the register is: 0b000|000|10 in binary and 0x02 in HEX
*/