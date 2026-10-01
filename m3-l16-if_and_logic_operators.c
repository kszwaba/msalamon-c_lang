#include <stdio.h>
#include <stdint.h>

int main(){

    printf("if for logic:(0 || printf(\"Hello world 1\\n\"))\n");
    getchar();

    if(0 || printf("Hello world 1\n")){

        printf("Inside if\n");
    }

/*
if(0 || printf("Hello world 1\n")) // both conditions are evaluated, because first condition = false (0), 
so second condition is evaluated and printed "Hello world 1"
console output:
Hello world
Inside if
$ 
*/

    getchar();

    printf("if for logic:(1 || printf(\"Hello world 2\\n\"))\n");
    getchar();


    if(1 || printf("Hello world 2\n")){

        printf("Inside if\n");
    }

/*
if(1 || printf("Hello world 2\n")) // only first condition is evaluated, because first condition = true (1), 
so second condition is not evaluated and not printed "Hello world 2"
console output:
Inside if
*/

    getchar();

    printf("if for logic:(0 && printf(\"Hello world 3\\n\"))\n");
    getchar();


    if(0 && printf("Hello world 3\n")){

        printf("Inside if\n");
    }

/*
if(0 && printf("Hello world 3\n")) // only first condition is evaluated, because first condition = false (0), 
so second condition is not evaluated and not printed "Hello world 3 and not printed "Inside if" because total condition is false
anf if condition is false, so "Inside if" is not printed
console output:
$
*/

    getchar();

    printf("if for logic:(1 && printf(\"Hello world 4\\n\"))\n");
    getchar();


    if(1 && printf("Hello world 4\n")){

        printf("Inside if\n");
    }

/*
if(1 && printf("Hello world 4\n")) // only first condition is evaluated, because first condition = true (1), 
so second condition is evaluated and printed "Hello world 4"
Total condidtion for (1 && printf("Hello world 4\n")) is true, so "Inside if" is printed
console output:
$
*/


    getchar();

    uint8_t Res = printf("Hello world 5\n");
    printf("workaround for if condition: \"printf Hello world 5\" as Res variable\n");
    getchar();


    if(0 && Res){

        printf("Inside if\n");
    }

/*
workaround for if condition: "printf Hello world 5" as Res variable
if(0 && Res) // only first condition is evaluated, because first condition = false (0), 
so second condition is not evaluated and not printed "Hello world 5"
Total condidtion for (0 && Res) is false, so "Inside if" is not printed
but function printf("Hello world 5") is evaluated before if condition and assigned to Res global variable for later use in program.
console output:
$
*/

    return 0;
}
