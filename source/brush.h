//brush.h programmed by PB&J(*this)->sandwich

#include "stdafx.h"

const char * BrushName(brush_t * b);
brush_t * Alloc_Brush();
brush_t * Draw_Brush(brush_t * b, vec3_t min, vec3_t max);
plane_t * BrushMake_Plane(brush_t * b, plane_t * p);
face_t * BrushMake_Face(brush_t * b, face_t * f);

brush_t * BrushCreated(qboolean Created);
brush_t * BrushShader(brush_t * b, const char * pShaderName, qboolean fit);

face_t * FaceShader(face_t * f, const char * pShaderName, qboolean fit);
face_t * QER_FaceData(face_t * f);

brush_t * QER_BrushData(brush_t * b);

plane_t * QER_PlaneData(plane_t * p);

face_t * MouseBoundsFace(face_t * f, int MB_Face);
brush_t * MouseBoundsBrush(brush_t * b, int MB_Brush);

void BrushDraw_Xy();
void BrushDraw();
void PrintBrush(brush_t * b);

qboolean BrushCleanup(brush_t * b);

brush_t * Setup_BrushDrag(brush_t * b);
face_t * Setup_FaceDrag(face_t * f);

void Brush_SetEpair(brush_t * b, const char * key, const char * value);

std::size_t g_nBrushSize;

brush_t * Setup_BrushScale(brush_t * b);

qboolean HighlightBrush(brush_t * b);
qboolean HighlightFace(face_t * f);

void PrintPlane(plane_t * p);
void PrintFace(face_t * f);
void PrintVector(vec3_t * v);
