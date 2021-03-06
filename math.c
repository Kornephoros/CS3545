/*
* math.c
*
* Created on: Jan 19, 2011
* Author: Brandon Connes
*/
#include "math.h"
#include <stdio.h>
#include <math.h>

double Magnitude(vec3_t v1);	// Magnitude must be written aside from the other macros
								// due to sqrt() not working in the header file.

//declare some vectors
vec3_t vec1, vec2, vec3;
double output;

int main(void)
{
	// Set values for two vectors, vec3 is typically used as the output vector.
	vec1[0] = 2.0;		vec1[1] = 2.0;		vec1[2] = 2.0;
	vec2[0] = 5.0;		vec2[1] = 5.0;		vec2[2] = 5.0;

	VectorAdd(vec1,vec2,vec3);
	printf("Vector addition: ");
	int i;
	for(i = 0; i < 3; i++)
	{
		printf("%g ", vec3[i]);
	}

	VectorSubtract(vec1,vec2,vec3);
	printf("\nVector subtraction: ");
	for(i = 0; i < sizeof(vec3)/sizeof(int); i++)
	{
		printf("%g ", vec3[i]);
	}

	DotProduct(vec1,vec2,output);
	printf("\nDot product: %g", output);

	Scaling(vec1, 2);
	printf("\nScaling by 2: ");
	for(i = 0; i < sizeof(vec1)/sizeof(int); i++)
	{
		printf("%g ", vec1[i]);
	}

	VCopy(vec1, vec3);
	printf("\nCopying vec1 to vec3: ");
	for(i = 0; i < sizeof(vec3)/sizeof(int); i++)
	{
		printf("%g ", vec3[i]);
	}

	VClear(vec3);
	printf("\nClearing vec3: ");
	for(i = 0; i < sizeof(vec3)/sizeof(int); i++)
	{
		printf("%g ", vec3[i]);
	}

	Inverse(vec2);
	printf("\nInverse of vec2: ");
	for(i = 0; i < sizeof(vec3)/sizeof(int); i++)
	{
		printf("%g ", vec2[i]);
	}

	Cross(vec1, vec2, vec3);
	printf("\nCross of vec1 and vec2: ");
	for(i = 0; i < sizeof(vec3)/sizeof(int); i++)
	{
		printf("%g ", vec3[i]);
	}

	Magnitude(vec2);
	printf("\nMagnitude of vec2: ");
	printf("%g ", Magnitude(vec2));

	Normalize(vec2);
	printf("\nNormalize of vec2: ");
	for(i = 0; i < sizeof(vec3)/sizeof(int); i++)
	{
		printf("%g ", vec2[i]);
	}
}

double Magnitude(vec3_t v1)
{
	double magnitude;
	magnitude = sqrt((v1[0]*v1[0]) + (v1[1]*v1[1]) + (v1[2]*v1[2]));
	return magnitude;
}
