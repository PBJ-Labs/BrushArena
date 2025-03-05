#include "varena-lib@cd101f#/varenaafx.h"

#define AFX_H 000

//winding
typedef struct winding_s{
    winding_t * prev, ** next;
    int numpoints;
    int maxpoint;
    int windingpoints[8][5];
}winding_t;

//plane
typedef struct plane_s{
    plane_t * prev, ** next;
    float points;
    vec3_t normal;
    vec3_t plane;
}plane_t;

//face
typedef struct face_s{
    face_t * prev, ** next;
    float points[4];
    vec3_t face;
}face_t;

//brush
typedef struct brush_s{
  brush_t * prev, **next;
  int bnumberid;

  vec3_t mins;
  vec3_t maxs;

  winding_t * brushwinding;
  plane_t * brushplane;
  face_t * brushface;
}brush_t;

typedef struct side_s{
 side_t * prev, ** next;
 int side[];
}side_t;

qboolean SelectFace(face_t * f);
qboolean SelectBrush(brush_t * b);
