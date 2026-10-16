#include <stdio.h>
#include <stdint.h>

uint8_t Danger;

int main() {

    printf("Danger: %d\n", Danger);

    Danger = 19;
    //Danger scope: 19-25

    if(Danger >= 19) {
    
        printf("Danger is equal to 19 or higher\n");
     
        if(Danger <= 25){                               //nesting if condition; if condition = false, goto "return 0", see flowchart below
            printf("Danger is beetwen 19 and 25\n");
        }
    } 
    else {
    
        printf("Danger is over scope: beetwen 19 and 25\n");
    }

    return 0;
}

/*  
       .-----------------------.
       |         START         |
       '----------.------------'
                  |
                  V
        .---------+----------.
       /   Is Danger >= 19?   \   [NO]     .---------------------------------.
      (   (Main IF Condition)  )---------->| Print: "Danger is over scope:   |
       \                      /            | beetwen 19 and 25\n"            |
        '---------+----------'             '----------------.----------------'
                  | [YES]                                   |
                  V                                         |
  .---------------+--------------.                          |
  | Print: "Danger is equal to   |                          |
  | 19 or higher\n"              |                          |
  '---------------+--------------'                          |
                  |                                         |
                  V                                         |
        .---------+----------.                              |
       /   Is Danger <= 25?   \   [NO]                      |
      ( (Nested IF Condition)  )------------.               |
       \                      /             |               |
        '---------+----------'              |               |
                  | [YES]                   |               |
                  V                         |               |
  .---------------+--------------.          |               |
  | Print: "Danger is beetwen    |          |               |
  | 19 and 25\n"                 |          |               |
  '---------------+--------------'          |               |
                  |                         |               |
                  V                         V               V
  .-----------------------------------------------------------------.
  |                             (MERGE)                             |
  '--------------------------------.--------------------------------'
                                   |
                                   V
                        .-----------------------.
                        |          END          |
                        '-----------------------'
*/  

/*
  NOTE: If the nested condition (Danger <= 25) evaluates to FALSE (e.g., Danger = 30):
  1. The program skips 'printf("Danger is beetwen 19 and 25\n");'.
  2. Since the nested 'if' has no 'else' block, execution simply continues past it.
  3. The outer 'else' block is ignored because the outer condition (Danger >= 19) was TRUE.
 
  Output for this case:
  "Danger is equal to 19 or higher"
*/