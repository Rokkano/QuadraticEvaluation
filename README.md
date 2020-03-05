# QuadraticEvaluation

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include <complex.h>

void printCube(double x, double y, double z, int count)
{
    z*=10;
    printf("g cube%i\n",count/8);
    printf("v %.1f %.1f %.1f\n", x, y, z);
    printf("v %.1f %.1f %.1f\n", x, y, z+0.1f);
    printf("v %.1f %.1f %.1f\n", x, y+0.1f, z);
    printf("v %.1f %.1f %.1f\n", x, y+0.1f, z+0.1f);
    printf("v %.1f %.1f %.1f\n", x+0.1f, y, z);
    printf("v %.1f %.1f %.1f\n", x+0.1f, y, z+0.1f);
    printf("v %.1f %.1f %.1f\n", x+0.1f, y+0.1f, z);
    printf("v %.1f %.1f %.1f\n", x+0.1f, y+0.1f, z+0.1f);
    printf("f %i %i %i %i\n",count+1,count+3,count+7,count+5);
    printf("f %i %i %i %i\n",count+3,count+7,count+8,count+4);
    printf("f %i %i %i %i\n",count+1,count+2,count+4,count+3);
    printf("f %i %i %i %i\n",count+5,count+6,count+8,count+7);
    printf("f %i %i %i %i\n",count+2,count+4,count+8,count+6);
    printf("f %i %i %i %i\n",count+1,count+2,count+6,count+5);
}



int main()
{
    printf("o Mesh\n");
    int count = 0;
    char line[100];
    
    double complex a = 1.0, b=0.0, c = 0.0, d = i + j*I;
    for(float i = -5; i <= 5; i+= 0.5f)
    {
        for(float j = -5; j <= 5; j+= 0.5f)
        {
            printCube(creal(d),cimag(d),cimag(-b-csqrt(-(b*b + 4 * a * c-d))/2*a),count);
            count+=8;
            printCube(creal(d),cimag(d),cimag(-b+csqrt(-(b*b + 4 * a * c-d))/2*a),count);
            count+=8;
        }
    }
}
