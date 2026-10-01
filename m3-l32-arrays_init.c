#include <stdio.h>
#include <stdint.h>

#define TAB_SIZE 100    
#define TAB_SIZE_LOC 100

uint8_t tab[TAB_SIZE]; //global variable declaration of 1D array with size of 100 elements

int main(){

    uint8_t i;

    //global variable TAB_SIZE
    for(i = 0; i < TAB_SIZE; i++){

        printf("tab[%d]: %d\n", i, tab[i]); //all elements of the 1D array are initialized to 0 by default with global TAB_SIZE variable declaration
    }

    //local variable TAB_SIZE_LOC
    uint8_t tab2[TAB_SIZE_LOC];         //local variable declaration of 1D array with size of 100 elements
                                        //all elements of th1 1D allays are initialized to random values
                                        //by default with local TAB_SIZE_LOC variable declaration on stack memory
    //uint8_t tab2[TAB_SIZE_LOC] = {0}; //local variable declaration of 1D array with size of 100 elements
                                        //all elements of the 1D array are initialized to 0 by default 
                                        //with local TAB_SIZE_LOC variable declaration on stack memory

    for(i = 0; i < TAB_SIZE_LOC; i++){

        printf("tab2[%d]: %d\n", i , tab2[i]);   
                                                
    }

    return 0;
}