/*
    LAP lab 2 part B
    Build with
    -> make
    Run
    -> ./final.o
    Clean temp files
    -> make clean
    
    A. Milind Topno (Milind712000)
    B. Yash Bansod
    C. Yash Chaudhary
    D. Rahul Saini
    E. Kumar Harsh
*/
#include <stdio.h>
#include <stdlib.h>
#include "veclib.h"

int main() {
    float v1[4];
    float v2[4];
    printf("Input format : \n Vector 1: 4 5 2 7\n Vector 2: 9 52 12 5\n\n\n");
    printf("Enter the two vectors\n");
    printf("Vector 1 : ");
    scanf("%f %f %f %f", &v1[0], &v1[1], &v1[2], &v1[3]);
    printf("Vector 2 : ");
    scanf("%f %f %f %f", &v2[0], &v2[1], &v2[2], &v2[3]);

    vectorAdd(v1, v2);
    vectorProd(v1, v2);
    vectorNorm(v1, v2);
    vectorDot(v1, v2);
    vectorAngle(v1, v2);

    return 0;
}