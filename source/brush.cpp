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
                Brush_SetEpair(b, "Brush %5.2c", "Brush%5.2p");
            }
    return cBuff;
};

//memory allocate brush
brush_t * Alloc_Brush(){
         if(g_pBrushPrimitMode){
                   brush_t * b = (brush_t*)qmalloc(sizeof(brush_t));
                   return b;
         }
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
            sysprintf("%f, %f, %f, %f, %f, %f, %f, %f", p->plane[i][0],
             p->plane[i][1], p->plane[i][2], p->points[i][0],
             p->points[i][1], p->points[i][2], p->normal[i][0]);
        }
};