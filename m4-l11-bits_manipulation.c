#include <stdio.h>
#include <stdint.h>

int main(){

    uint8_t Value = 0b00001000;
    uint8_t ValueOR = Value; //initialize ValueOR with the value of Value before bits manipulation

    printf("\n");
    printf("ValueOR before bits manipulation:\n");
    for (int i = 7; i >= 0; i--){
        printf("%d", (ValueOR >> i) & 1);   // right shift by i bit and AND operation with 1 to get the value of the bit at position i 
    }
    printf("\n");

    ValueOR |= ((1<<0) | (1<<3)); // set bit 0 and bit 3 to 1 using OR operation

    printf("Value after OR (set) bits manipulation by setting bits 0 and 3: \n");
    for (int i = 7; i >= 0; i--){
        printf("%d", (ValueOR >> i) & 1);
    }
    printf("\n\n");

    uint8_t ValueAND = Value; //initialize ValueAND with the value of Value before bits manipulation

    printf("ValueAND before bits manipulation:\n");
    for (int i = 7; i >= 0; i--){
        printf("%d", (ValueAND >> i) & 1);
    }
    printf("\n");

    ValueAND &= ~((1<<0) | (1<<3)); // clear bit 0 and bit 3 to 0 using AND operation with negated mask))

    printf("Value after AND (clear) bits manipulation by clearing bits 0 and 3: \n");
    for (int i = 7; i >= 0; i--){
        printf("%d", (ValueAND >> i) & 1); 
    }
    printf("\n\n");

    uint8_t ValueNOT = Value; //initialize ValueNOT with the value of Value before bits manipulation

    printf("Value before bits manipulation:\n");
    for (int i = 7; i >= 0; i--){
        printf("%d", (Value >> i) & 1);
    }
    printf("\n");

    ValueNOT ^= ((1<<0) | (1<<3)); // toggle bit 0 and bit 3 using XOR operation

    printf("Value after NOT (toggle) bits manipulation by toggling bits 0 and 3: \n");
    for (int i = 7; i >= 0; i--){
        printf("%d", (ValueNOT >> i) & 1);
    }
    
    printf("\n\n");

    return 0;
}

/*
console output:

ValueOR before bits manipulation:
00001000
Value after OR (set) bits manipulation by setting bits 0 and 3: 
00001001

ValueAND before bits manipulation:
00001000
Value after AND (clear) bits manipulation by clearing bits 0 and 3: 
00000000

Value before bits manipulation:
00001000
Value after NOT (toggle) bits manipulation by toggling bits 0 and 3: 
00000001

*/