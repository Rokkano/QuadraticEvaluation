#include <stdio.h>
#include <complex.h>

void printCube(double x, double y, double z, int count,FILE *fp)
{
    z*=10;
    fprintf(fp,"g cube%i\n",count/8);
    fprintf(fp,"v %.1f %.1f %.1f\n", x, y, z);
    fprintf(fp,"v %.1f %.1f %.1f\n", x, y, z+0.1f);
    fprintf(fp,"v %.1f %.1f %.1f\n", x, y+0.1f, z);
    fprintf(fp,"v %.1f %.1f %.1f\n", x, y+0.1f, z+0.1f);
    fprintf(fp,"v %.1f %.1f %.1f\n", x+0.1f, y, z);
    fprintf(fp,"v %.1f %.1f %.1f\n", x+0.1f, y, z+0.1f);
    fprintf(fp,"v %.1f %.1f %.1f\n", x+0.1f, y+0.1f, z);
    fprintf(fp,"v %.1f %.1f %.1f\n", x+0.1f, y+0.1f, z+0.1f);
    fprintf(fp,"f %i %i %i %i\n",count+1,count+3,count+7,count+5);
    fprintf(fp,"f %i %i %i %i\n",count+3,count+7,count+8,count+4);
    fprintf(fp,"f %i %i %i %i\n",count+1,count+2,count+4,count+3);
    fprintf(fp,"f %i %i %i %i\n",count+5,count+6,count+8,count+7);
    fprintf(fp,"f %i %i %i %i\n",count+2,count+4,count+8,count+6);
    fprintf(fp,"f %i %i %i %i\n",count+1,count+2,count+6,count+5);
}


