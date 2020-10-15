// author Kumar Harsh b18066

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void vectorAngle(float v1[4], float v2[4])
{
    //calculate dot and mods
    double dot = 0, mod1 = 0, mod2 = 0;
    for (int i = 0; i < 4; i++)
    {
        dot += (v1[i] * v2[i]);
        mod1 += (v1[i] * v1[i]);
        mod2 += (v2[i] * v2[i]);
    }

    mod1 = sqrt(mod1);
    mod2 = sqrt(mod2);

    //use acos
    printf("The angle between the vectors in radians is %f", acos(dot / (mod1 * mod2)));
}