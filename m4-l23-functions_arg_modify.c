#include <stdio.h>
#include <stdint.h>

uint8_t ReturnModifyArg(uint8_t arg);
void NoReturnModifyArg(uint8_t arg);

int main(){

    uint8_t Var = 5;
    printf("Var before ReturnModifyArg function call: %d\n", Var);
    Var = ReturnModifyArg(Var); // call the ReturnModifyArg function and assign the returned value
    printf("Var after ReturnModifyArg function call: %d\n", Var);

    Var = 5; // reset Var to 5
    printf("Var after reset: %d\n", Var);

    NoReturnModifyArg(Var); // call the NoReturnModifyArg function
    printf("Var after NoReturnModifyArg function call: %d\n", Var); // Var remains unchanged

    return 0;
}

uint8_t ReturnModifyArg(uint8_t arg){

    arg++;
    return arg; // return the modified value of arg by incrementing it by 1
}

void NoReturnModifyArg(uint8_t arg){

    arg++;
    // do nothing with the modified value
}