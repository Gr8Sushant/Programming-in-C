#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int n; 
void main(int argc, char *argv[])
{
printf("Enter any number between 1 and 50 \n");
scanf("%d", &n);
int *x = malloc(sizeof(int) *n);
    for (int i=0; i < n; i++){
        x[i] = rand();
        printf("%d is %d\n", i, x[i]);
    }
}