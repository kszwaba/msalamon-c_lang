#include <stdio.h>
#include <stdint.h>

uint8_t Var1 = 0xBC;
uint8_t Var2 = 0x22;

int main (){

    uint8_t ResultOr = Var1 | Var2; //bitwise OR operation
    uint8_t ResultAnd = Var1 & Var2; //bitwise AND operation
    uint8_t ResultXor = Var1 ^ Var2; //bitwise XOR operation
    uint8_t ResultNot = ~Var1; //bitwise NOT operation

    printf("ResultOr: Var1 = %d (0x%X), Var2 = %d (0x%X)\n", Var1, Var1, Var2, Var2);
    printf("Var1: %d 0b%08d\n", Var1, Var1);
    printf("Var2: %d 0b%08d\n", Var2, Var2);
    printf("ResultOr = %d (0x%X)\n", ResultOr, ResultOr);

    printf("\n");

    printf("ResultAnd: Var1 = %d (0x%X), Var2 = %d (0x%x)\n", Var1, Var1, Var2, Var2);
    printf("Var1: %d 0b%08d\n", Var1, Var1);
    printf("Var2: %d 0b%08d\n", Var2, Var2);
    printf("ResultAnd = %d (0x%X)\n", ResultAnd, ResultAnd);

    printf("\n");

    printf("ResultXor: Var1 = %d (0x%X), Var2 = %d (0x%x)\n", Var1, Var1, Var2, Var2);
    printf("Var1: %d 0b%08d\n", Var1, Var1);
    printf("Var2: %d 0b%08d\n", Var2, Var2);
    printf("ResultXor = %d (0x%X)\n", ResultXor, ResultXor);

    printf("\n");
    printf("ResultNot: Var1 = %d (0x%X)\n", Var1, Var1);
    printf("Var1: %d 0b%08d\n", Var1, Var1);
    printf("ResultNot = %d (0x%X)\n", ResultNot, ResultNot);
    
    return 0;
}

/*
On bit operations all operations are done only on uint8_t, uint16_t, uint32_t, uint64_t types.
*/