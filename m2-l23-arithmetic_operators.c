#include <stdio.h>
#include <stdint.h>

int main() {
    
    uint8_t Var = 2 + 2;
    printf("Value Var: %d\n", Var);
    
    float Var2 = 5.0 / 2.0;
    printf("Value Var2: %.4f\n", Var2);
    
    float Var3 = 5 % 2; //only works with integers, so the result is 1.0
    printf("Value Var3: %.4f\n",Var3);
    return 0;
}