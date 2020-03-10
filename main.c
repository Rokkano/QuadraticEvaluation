#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <err.h>

#include "main.h"


int main(int argc, char *argv[])
{
	if (argc < 3)
		err(1,"Not enough arg");
	//ax² + bx + c
	double complex a = atof(argv[1]), b = atof(argv[2]), c = atof(argv[3]);
    int upperbound = ((argc >= 4)?atoi(argv[4]):5);
	int lowerbound = ((argc >= 5)?atoi(argv[5]):5);
	float step = ((argc>= 6)?atof(argv[6]):0.5f);
	
	printf("%.1fx² + %.1fx + %.1f in [%i;%i] by %.1f",creal(a),creal(b),creal(c),upperbound,lowerbound,step);
	
	FILE *fp;
	fp = fopen("./output.obj","w");
	if (fp==NULL)
		err(1,"Could not open file");
	
    fprintf(fp,"o Mesh\n");
    int count = 0;
    
    for(float i = lowerbound; i <= upperbound; i+= step)
    {
        for(float j = lowerbound; j <= upperbound; j+= step)
        {
			double complex d = i + j * I;
            printCube(creal(d),cimag(d),cimag(-b-csqrt(-(b*b + 4 * a * c-d))/2*a),count,fp);
            count+=8;
            printCube(creal(d),cimag(d),cimag(-b+csqrt(-(b*b + 4 * a * c-d))/2*a),count,fp);
            count+=8;
        }
    }
}
