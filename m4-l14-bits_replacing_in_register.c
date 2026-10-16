#include <stdio.h>
#include <stdint.h>

int main(){

    uint8_t osrs_p = 5; // oversampling pressure value

    osrs_p &= 0x07; // clear the 0, 1, 2 bits to 0 by applying mask 0b11111000
    printf("Oversampling Pressure Value osrs_p to set: %d, 0x%02X\n", osrs_p, osrs_p);

    uint8_t ctrl_meas = 0x5B; // register value 0b010|110|11 in binary (recieved eg from sensor)
    printf("Register ctrl_meas value in DEC: %d\n", ctrl_meas);
    printf("Register ctrl_meas value in HEX: 0x%02X\n", ctrl_meas);
    printf("Register ctrl_meas value in BIN: 0b");
    for(int i = 7; i >= 0; i--){
        printf("%d", (ctrl_meas >> i) & 1);
    }
    printf("\n");

    ctrl_meas &= ~(0x1C); // clear the 2, 3, 4 bits to 0 by applying mask 0b11100011
    //ctrl_meas &= ~((1 << 2) | (1 << 3) | (1 << 4));

    ctrl_meas |= (osrs_p << 2); // set the 2, 3, 4 bits to the value of osrs_p by shifting osrs_p to the left by 2 and applying mask 0b00011100

    printf("Register ctrl_meas value after modification in DEC: %d\n", ctrl_meas);
    printf("Register ctrl_meas value after modification in HEX: 0x%02X\n", ctrl_meas);
    printf("Register ctrl_meas value after modification in BIN: 0b");
    for(int i = 7; i >= 0; i--){
        printf("%d", (ctrl_meas >> i) & 1);
    }
    printf("\n");

    return 0;
}

/*
console output:

Oversampling Pressure Value osrs_p to set: 5, 0x05
Register ctrl_meas value in DEC: 91
Register ctrl_meas value in HEX: 0x5B
Register ctrl_meas value in BIN: 0b01011011
Register ctrl_meas value after modification in DEC: 87
Register ctrl_meas value after modification in HEX: 0x57
Register ctrl_meas value after modification in BIN: 0b01010111

Notes:
Regardless of the value in the ctrl_meas register, due to masking, 
the bit values ​​for the "oversampling press value" are equal to the value of the osrs_p variable.
*/