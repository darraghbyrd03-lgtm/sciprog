#include <stdio.h>

#include <stdlib.h>

#define MAX_FILE_NAME 100

#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){

//define our file variable

FILE *f;

char filename[MAX_FILE_NAME];

printf("Enter file name: ");

scanf("%s", filename);

// ##! n function which gets the number of lines

int n = getlines(filename);
 


// TODO: Open the file
f = fopen(filename, "r");
int i;

// TODO: Allocating a matrix for storing the magic square
int **square = malloc(n * sizeof(int *));
for (i = 0; i < n; i++) {
    square[i] = malloc(n * sizeof(int));
}


for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            fscanf(f, "%d", &square[row][col]);
        }
    }

    printf("\n");

fclose(f);

//printf("n before call = %d\n", n);//debugging
int check =isMagicSquare(square,n);
if(check==0)
    {   
    printf("Square is not magic or n is negative.\n");
    }
else    
    {
    printf("Square is magic.\n");
    }

 
for (i = 0; i < n; i++) 
    {
        free(square[i]);
    }
    free(square);


return 0;

}           



int getlines(char filename[MAX_FILE_NAME]) {

FILE *fp;

fp = fopen(filename, "r");

int ch_read;

int count = 0;

while( (ch_read = fgetc(fp)) != EOF)

{

if (ch_read == '\n'){

count++;

}

}

printf("No. lines, %d\n", count+1);
count+=1;
fclose(fp);

return count;

}

