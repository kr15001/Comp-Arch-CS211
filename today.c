#include <stdio.h>
#include <stdlib.h>

double mat[] = {100, 6,4,2,777,9.0,0.00001,20000,4};

int main(int argc, char **argv){
    int row,col;
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
        printf("%100f", mat[row][col]);
        }
        putchar('\n');
    }
    return EXIT_SUCCESS;
}