#include <stdio.h>
#include <stdint.h>

uint8_t Danger;

int main() {

    printf("Danger: %d\n", Danger);

    if(Danger == 1) {

        printf("Danger\n");
    }

    return 0;
}