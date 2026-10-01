#include <stdio.h>
#include <stdint.h>

uint8_t Var = 0xBC;

int main(){

    uint8_t ResultShitfLeft = Var << 1;
    uint8_t ResultShiftRight = Var >> 3;

    for (int i = 7 ; i >= 0; i--){
        printf("%d", (Var >> i) & 1);   // right shift by i bit and AND operation with 1 to get the value of the bit at position i 
    }                                   // for binary representation of Var
    printf (" Var = %d (0x%X)\n", Var, Var);
    for (int i =7; i >= 0; i--){
        printf("%d", (ResultShitfLeft >> i) & 1);   // right shift by i bit and AND operation with 1 to get the value of the bit at position i 
                                                    // for binary representation of ResultShitfLeft
    }
    printf(" Var after left shift by 1 bit\n");
    printf("ResultShitfLeft = %d (0x%X)\n", ResultShitfLeft, ResultShitfLeft);
    printf("\n");

    for (int i = 7; i >= 0; i--){
        printf("%d", (Var >> i) & 1);   // right shift by i bit and AND operation with 1 to get the value of the bit at position i 
    }                                   // for binary representation of ResultShiftRight
    printf(" Var = %d (0x%X)\n", Var, Var);
    for (int i = 7; i >= 0; i--){
        printf("%d", (ResultShiftRight >> i) & 1);  // right shift by i bit and AND operation with 1 to get the value of the bit at position i 
    }                                               // for binary representation of ResultShiftRight
    printf(" Var after right shift by 3 bits\n");
    printf("ResultShiftRight = %d (0x%X)\n", ResultShiftRight, ResultShiftRight);
    printf("\n");

    return 0;
}

/*
(Var1 >> 1) & 1 - right shift by 1 bit and AND operation with 1 to get the value of the bit at position 1

Var1 = 0xBC = 10111100 in binary
After right shift by 1 bit: 01011110 (01011110|0 >> 1 = 01011110)
10111100 >> 1
01011110

01011110 & 00000001 = 0 (the bit at position 1 is 0)
01011110
&
00000001
---------
00000000

(Var1 >> 3) & 1
10111100 >> 3
00010111
&
00000001
---------
00000001 (the bit at position 3 is 1)

(Var1 >> 7) & 1    // bit 7
(Var1 >> 6) & 1    // bit 6
(Var1 >> 5) & 1    // bit 5
(Var1 >> 4) & 1    // bit 4
(Var1 >> 3) & 1    // bit 3
(Var1 >> 2) & 1    // bit 2
(Var1 >> 1) & 1    // bit 1
(Var1 >> 0) & 1    // bit 0

additional information about bit shifting:
Stack overflow article: Is there a printf converter to print in binary format?
https://stackoverflow.com/questions/111928/is-there-a-printf-converter-to-print-in-binary-format

*/