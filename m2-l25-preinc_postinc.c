#include <stdio.h>
#include <stdint.h>


int main() {

    uint8_t Var = 2;
    //Post-increment operator (Var++)
    uint8_t NewVar_post = Var++ * 2;
    printf("Value Var: %d\n", Var);
    printf("Value NewVar_post: %d\n", NewVar_post); //first multiply Var by 2, then increment Var, resulting in NewVar_post = 4 and Var = 3 

    uint8_t Var2 = 2;
    //Pre-increment operator (++Var)
    uint8_t NewVar_pre = ++Var2 * 2;
    printf("Value Var2: %d\n", Var2);
    printf("Value NewVar_pre: %d\n", NewVar_pre);   //first increment Var2, then multiply by 2, resulting in NewVar_pre = 6 and Var2 = 3
    return 0;

    /*
    $gcc m2-l25-preinc_postinc.c -o program.bin
    $./program.bin 
    Value Var: 3
    Value NewVar_post: 4
    Value Var2: 3
    Value NewVar_pre: 6
    $
    */
}
