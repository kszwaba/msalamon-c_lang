#include <stdio.h>
#include <stdint.h>

#define TAB_SIZE_X 8    //rows
#define TAB_SIZE_Y 16   //columns

uint8_t tab[TAB_SIZE_X][TAB_SIZE_Y]; // 2D array declaration [rows][columns]

int main(){

    uint8_t i, j;
    printf("2D arrays %dx%d filled with 1\n", TAB_SIZE_X, TAB_SIZE_Y);

    //fill each column, then move to the next row
    for(i = 0; i < TAB_SIZE_X; i++){ //scan for rows 1-8
        for(j = 0; j < TAB_SIZE_Y; j++){ //scan for columns 1-16 within each row selected in previous loop

            tab[i][j] = 1; //assign value 1 to each element of the 2D array
            printf("%d",  tab[i][j]);
        }
        printf("\n"); //new line after each row 
    }

    printf("2D arrays %dx%d filled with character defined as FillChar\n", TAB_SIZE_X, TAB_SIZE_Y);
    uint8_t FillChar = '#';

    for(i = 0; i < TAB_SIZE_X; i++){
        for(j = 0; j < TAB_SIZE_Y; j++){

            tab[i][j] = FillChar; //assign value FillChar to each element of the 2D array
            printf("%c", tab[i][j]);
        }
        printf("\n"); //new line after each row
    }

    printf("2D arrays %dx%d filled with digits incremented from 0 to TAB_SIZE_X * TAB_SIZE_Y - 1\n", TAB_SIZE_X, TAB_SIZE_Y);
    for(i = 0; i < TAB_SIZE_X; i++){
        for(j = 0; j < TAB_SIZE_Y; j++){
            tab[i][j] = (i * TAB_SIZE_Y) + j; //assign value to each element of the 2D array from 0 to TAB_SIZE_X * TAB_SIZE_Y - 1
            printf("%03d ", tab[i][j]);
        }
        printf("\n"); //new line after each row
    }

    return 0;

}