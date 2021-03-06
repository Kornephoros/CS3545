/*
 * math.h
 *
 *  Created on: Jan 19, 2011
 *      Author: Brandon Connes
 */

#ifndef MATH_H_
#define MATH_H_

//Vector typedefs
typedef float vec_t;
typedef vec_t vec2_t[2];
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];
typedef vec_t vec5_t[5];

#define _X = 0;
#define _Y = 1;
#define _Z = 2;


#define VectorAdd(v1, v2, out) {out[0]=v1[0]+v2[0];out[1]=v1[1]+v2[1];out[2]=v1[2]+v2[2];}
#define VectorSubtract(v1, v2, out) {out[0]=v1[0]-v2[0];out[1]=v1[1]-v2[1];out[2]=v1[2]-v2[2];}
#define DotProduct(v1, v2, out) {out=v1[0]*v2[0]+v1[1]*v2[1]+v1[2]*v2[2];}
#define Scaling(v1, sc) {v1[0] *= sc; v1[1] *= sc; v1[2] *= sc;}
#define VCopy(v1, v2) {v2[0] = v1[0]; v2[1] = v1[1]; v2[2] = v1[2];}
#define VClear(v1) {v1[0]=0;v1[1]=0;v1[2]=0;}
#define Inverse(v1) {v1[0] = -v1[0]; v1[1] = -v1[1]; v1[2] = -v1[2];}
#define Cross(v1, v2, out) {out[0]=(v1[1]*v2[0]-v1[0]*v2[1]);out[1]=(v1[2]*v2[1]-v1[1]*v2[2]);out[2]=(v1[2]*v2[0]-v1[0]*v2[2]);}
#define Normalize(v1) {float mag=Magnitude(v1); v1[0]=v1[0]/mag; v1[1]=v1[1]/mag; v1[2]=v1[2]/mag;}
#endif /* MATH_H_ */


