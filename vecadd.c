#include<stdio.h>
void vectorAdd(float v1[4], float v2[4]){ // prints sum of 2 vectors
    printf("Addition of 2 vectors : (%.3f,%.3f,%.3f,%.3f)", v1[0]+v2[0], v1[1]+v2[1], v1[2]+v2[2], v1[3]+v2[3]);
    printf("\n");
    return;
}