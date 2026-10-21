#include <stdio.h>
#include <stdint.h>

uint8_t ReturnSum(uint8_t a, uint8_t b); // Function prototype declaration

int main(){

    uint8_t VarA = 3;
    uint8_t VarB = 5;
    uint8_t Result; // This is a local variable to main() function, it is not the same as the Result in ReturnSum().

    Result = ReturnSum(VarA, VarB); // Calling the function ReturnSum() by value and passing VarA and VarB as arguments.
    printf("Result of %d + %d = %d\n", VarA, VarB, Result);

    return 0;
}

uint8_t ReturnSum(uint8_t a, uint8_t b){

    uint8_t Result; // This is only local variable to this function, it is not the same as the Result in main().

    Result = a + b;

    return Result;
}

/*
console output:
Result of 3 + 5 = 8
*/