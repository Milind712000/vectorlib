// author Yash Chaudhary b18094

#include<stdio.h>
#include <math.h>

void vectorNorm(float v1[4], float v2[4]){

	float norm = 0;
	for(int i = 0; i < 4; i++){
		norm += pow((v2[i] - v1[i]), 2);
	}
	norm = sqrt(norm);

    printf("norm of 2 vectors is %f \n", norm);
}