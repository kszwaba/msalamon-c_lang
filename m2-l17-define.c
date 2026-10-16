#include <stdio.h>

#define PI 3.1415

float VarFloat;

int main() {

    VarFloat = PI;
    int FloatSize = sizeof(VarFloat);

    printf("VarFloat: %.4f\n", VarFloat);
    printf("sizeof VarFloat: %zu\n", sizeof(VarFloat));
    printf("sizeof Varfloat: %d\n", FloatSize);
    return 0;
}