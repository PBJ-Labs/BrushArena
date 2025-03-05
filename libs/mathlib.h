//mathlib.h programmed by PB&J(*this)->sandwich;

#include <array>
#include <math.h>

#include "cmdlib.h"

typedef float vec_t;
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];
typedef vec_t vec6_t[6];

vec3_t origin = {0.0f, 0.0f, 0.0f};

void VectorNormalize(vec3_t vec){sysprintf("%5.2f, %5.2f, %5.2f", vec);};
void VectorOrigin(vec3_t ori);
void VectorCopy(void * src, void * dest, std::size_t vecsize);

int snap( float v );

std::vector<vec3_t> VectorsArray[];

vec3_t tail_t;

int point;


