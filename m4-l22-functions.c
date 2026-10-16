#include <stdio.h>
#include <stdint.h>

uint8_t ReturnSum(uint8_t a, uint8_t b);

int main(){

    uint8_t VarA = 3;
    uint8_t VarB = 5;
    uint8_t Result;

    Result = ReturnSum(VarA, VarB);
    printf("Result of %d + %d = %d\n", VarA, VarB, Result);

    return 0;
}

uint8_t ReturnSum(uint8_t a, uint8_t b){

    uint8_t Result;

    Result = a + b;

    return Result;
}