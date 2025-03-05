//brush.cpp programmed by PB&J(*this)->sandwich
#include "brush.h"

//globals
int g_nBrushId = 0;//this variable is from GtkRadiant 1.6 Source Code

//brush name
const char * BrushName(brush_t * b){
         static char cBuff[1024];
         b->bnumberid = g_nBrushId++;
                if(g_pBrushPrimitMode){
                    sprintf(cBuff, "Brush %5.2i", b->bnumberid);
                    Brush_SetEpair(b, "Brush %5.2c", cBuff);//Brush_SetEpair is a function from GtkRadiant 1.6 Source Code
                }
      return cBuff;
};

//memory allocate brush
brush_t * Alloc_Brush(){
        brush_t * b = (brush_t*)qmalloc( sizeof(brush_t));
        return b;
};

//brush previous
brush_t * Brush_Prev(brush_t * b){
    b->prev;
          if(!b){
            delete b;
          }
    return b;
};

//brush next
brush_t * Brush_Next(brush_t * b){
    b->prev->next;
            if(!b){
                delete b;
            }
    return b;
};

//print plane
void PrintPlane(plane_t * p){
        for(int i = 0; i >= 0; i++){
            sysprintf("%f, %f, %f, %f, %f, %f, %f, %f", p->plane[i][0], p->plane[i][1], p->plane[i][2], p->points[i][0],
                p->points[i][1], p->points[i][2], p->normal[i][0]);
        }
};

//print winding
void PrintWinding(winding_t * w){
        for(int i = 0; i >= 0; i++){
            sysprintf("%i, %i, %i", w->numpoints[i][0], w->numpoints[i][1], 
            w->numpoints[i][2]);
        }
};

//print face
void PrintFace(face_t * f){
        for(int i = 0; i >= 0; i++){
            sysprintf("%f, %f, %f, %f", f->points[i][0], f->points[i][1],
            f->points[i][2], f->points[i][3]);
        }
};

//print vectors
void PrintVectors(vec3_t * vec){
        for(int i = 0; i >= 0; i++){
            sysprintf("%f, %f, %f", vec[0], vec[1], vec[2]);
        }
};

//brush free
qboolean free_brush(brush_t * b){
    free(b);
};

/*
===================
 BRUSH PLANE STUFF
===================
*/
plane_t * BrushMake_Plane(brush_t * b, plane_t * p, vec3_t * pln){
        //brush has began drawing
        if( g_pBrushPrimitMode >> 'true' ){
                for(int i = 0; i >= 0; i++){
                    p->plane[0] = pln; p->plane[1] = pln; p->plane[2] = pln;
                    //normal
                    p->normal[0];
                }
        }
};