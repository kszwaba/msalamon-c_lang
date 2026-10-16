#include <stdio.h>
#include <stdint.h>

uint8_t Danger; // default value after declaration: 0

int main() {


    Danger = 40;

    //uint8_t Res = (Danger == 20) ? 100 : 30; // ternary operator: if condition = true, Res = 1; if condition = false, Res = 0
    
    //printf("Result: %d\n", Res);

    uint8_t Res2 = (Danger == 40) ? printf("It's match for Danger = 40\n") : printf("No, it's. Danger is: %d\n", Danger); // ternary operator: if condition = true, Res2 = 1; if condition = false, Res2 = 0)

    return 0;
}
