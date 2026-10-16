#include <stdio.h>
#include <stdint.h>

uint8_t Danger;

int main() {

    printf("Danger: %d\n", Danger);

    Danger = 19;

    if(Danger == 19) {
        printf("Danger is 19\n");
    } 
        else if(Danger == 20){
            printf("Danger is 20\n");
        }
            else if(Danger == 21){
                printf("Danger is 21\n");
            }
                else {
                    printf("Danger is other than 19 or other than 20 or other than 21\n");
                }

    return 0;
}

/*  
                    +------------------+
                    |      START       |
                    +--------+---------+
                             |
                             v
                    +------------------+
                    |  Danger == 19 ?  |
                    +--------+---------+
                         TAK | NIE
                             |       \
                             v        v
                +----------------+   +------------------+
                | printf:        |   |  Danger == 20 ?  |
                | "Danger is 19" |   +--------+---------+
                +--------+-------+        TAK | NIE
                         |                   |       \
                         |                   v        v
                         |        +----------------+   +------------------+
                         |        | printf:        |   |  Danger == 21 ?  |
                         |        | "Danger is 20" |   +--------+---------+
                         |        +--------+-------+        TAK | NIE
                         |                 |                   |       \
                         |                 |                   v        v
                         |                 |        +----------------+  +----------------+
                         |                 |        | printf:        |  | printf:        |
                         |                 |        | "Danger is 21" |  | "Danger is     |
                         |                 |        +--------+-------+  | other than..." |
                         |                 |                 |          +--------+-------+
                         |                 |                 |                   |
                         +-----------------+-----------------+-------------------+
                                           |
                                           v
                                  +------------------+
                                  |       END        |
                                  +------------------+
*/  
