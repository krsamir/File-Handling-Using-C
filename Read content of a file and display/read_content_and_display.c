#include<stdio.h>
#include<stdlib.h>

void main(){
    char c[1000];
    FILE *fptr;
    if((fptr = fopen("file1.txt","r")) == NULL ){
        printf("Error! opening file");      // exit from program if file pointer returns NULL.
        exit(1);
    }
    // read the text until newline
    fscanf(fptr,"%[^\n]", c);
    printf("Data from the file:\n%s", c);
    fclose(fptr);
}
