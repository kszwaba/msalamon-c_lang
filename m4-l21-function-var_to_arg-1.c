#include <stdio.h>
#include <stdint.h>

void MyFun(uint8_t Var);

int main(){

    uint8_t LocalVar = 3;

    MyFun(LocalVar);

    printf("%d\n", LocalVar); // LocalVar will still be 3, because the value of LocalVar was passed to MyFun() by value, not by reference.

    return 0;
}

void MyFun(uint8_t Var){

    Var = 5;

    return;
}