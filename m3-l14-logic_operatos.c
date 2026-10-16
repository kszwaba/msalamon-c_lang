#include <stdio.h>
#include <stdint.h>

uint8_t ResOR, ResAND, ResNOT, ResMIX; // default value after declaration: 0

uint8_t InA = 0, InB = 10; // value other than 0 is considered as TRUE (1), value = 0 is considered as FALSE (0)

int main(){

    ResOR = (InA || InB); // logical OR operator: if InA = 1 or InB = 1, ResOR = 1; if InA = 0 and InB = 0, ResOR = 0
    printf("OR result: %d\n", ResOR);

    ResAND = (InA && InB); // logical AND operator: if InA = 1 and InB = 1, ResAND = 1; if InA = 0 or InB = 0, ResAND = 0
    printf("AND result: %d\n", ResAND);

    ResNOT = (!InA); // logical NOT operator: if InA = 1, ResNOT = 0; if InA = 0, ResNOT = 1
    printf("NOT result: %d\n", ResNOT);

    ResMIX = !(InA && InB); // logical NOT operator: if InA = 1 and InB = 1, ResMIX = 0; if InA = 0 or InB = 0, ResMIX = 1
    printf("MIX: %d\n", ResMIX);

    return 0;
}