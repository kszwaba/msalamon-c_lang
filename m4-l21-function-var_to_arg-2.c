#include <stdio.h>
#include <stdint.h>

void tryToChange(int num);

int main(){
    int x = 10;
    tryToChange(x);
    printf("%d\n", x); // x will still be 10, because the value of x was passed to tryToChange() by value, not by reference.
}

void tryToChange(int num){
    num = 99;
}

