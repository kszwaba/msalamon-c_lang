#include <stdio.h>
#include <stdint.h> //for uint8_t

uint8_t VarGlob; //global variable, dafault value is 0, can be used in any function

int main() {

    printf("Value VarGlob: %d\n", VarGlob); //global variable, default value is 0

    uint8_t VarLocal8; //local variable, can be used only in this function
    printf("value VarLocal8: %d\n", VarLocal8); //local variable, default value is undefined, can be used only in this function

    uint16_t VarLocal16; //local variable, can be used only in this function
    printf("value VarLocal16: %d\n", VarLocal16); //local variable, default value is undefined, can be used only in this function

    uint32_t VarLocal32; //local variable, can be used only in this function
    printf("value VarLocal32: %d\n", VarLocal32); //local variable, default value is undefined, can be used only in this function

    float VarLocalf; //local variable, can be used only in this function
    printf("value VarLocalf: %f\n", VarLocalf); //local variable, default value is undefined, can be used only in this function


    return 0;
}

/*
$gcc m3-l3-ovrriding_variables.c -o program.bin
$./program.bin 
Value VarGlob: 0
value VarLocal8: 0
value VarLocal16: 0
value VarLocal32: -1349394336   //random value from stack, because the local variable is not initialized
value VarLocalf: 0.000000
*/