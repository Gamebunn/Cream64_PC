// MODIFIED BY A BLENDER ADDON //
#include <PR/ultratypes.h>

#include "dynlist_macros.h"
#include "dynlists.h"
#include "../dynlist_proc.h"

#define VTX_NUM 62 
/* @ 04003610 */
static s16 verts_mario_eye_right[VTX_NUM][3] = {{242, -51, 57}, {281, -48, 57}, {242, -44, 102}, {281, -42, 96}, {242, -32, 139}, {281, -31, 128}, {242, -17, 163}, {281, -17, 149}, {242, -1, 171}, {281, -2, 155}, {242, 13, 160}, {281, 11, 146}, {242, 24, 134}, {281, 21, 123}, {242, 29, 95}, {281, 26, 90}, {242, 28, 50}, {281, 26, 50}, {242, 21, 6}, {281, 19, 12}, {242, 9, -31}, {281, 8, -20}, {242, -5, -55}, {281, -5, -41}, {242, -21, -62}, {281, -20, -47}, {242, -36, -52}, {281, -33, -38}, {242, -46, -26}, {281, -44, -15}, {242, -52, 12}, {281, -49, 18}, {288, -34, 92}, {288, -39, 64}, {288, -26, 115}, {288, -15, 130}, {288, -3, 134}, {288, 7, 128}, {288, 15, 111}, {288, 19, 87}, {288, 19, 59}, {288, 14, 31}, {288, 6, 8}, {288, -39, 36}, {288, -17, -32}, {288, -24, -35}, {288, -32, -31}, {288, -37, -20}, {288, -10, -22}, {288, -4, -5}, {288, -40, -4}, {288, -1, 10}, {288, -40, 14}, {288, -40, 2}, {288, -38, 26}, {288, -37, 32}, {288, -1, 29}, {288, -31, 47}, {288, -4, 45}, {288, -24, 57}, {288, -9, 55}, {288, -16, 60}};

/* @ 04003730 */
static struct GdVtxData vtx_mario_eye_right = { VTX_NUM, 0x1, verts_mario_eye_right };
#undef VTX_NUM

#define FACE_NUM 106 
/* @ 0400373C */
static u16 facedata_mario_eye_right[FACE_NUM][4] = {{6, 2, 5, 4}, {6, 4, 7, 6}, {6, 6, 9, 8}, {6, 9, 10, 8}, {6, 11, 12, 10}, {6, 13, 14, 12}, {6, 15, 16, 14}, {6, 16, 19, 18}, {6, 18, 21, 20}, {6, 20, 23, 22}, {6, 22, 25, 24}, {6, 25, 26, 24}, {6, 27, 28, 26}, {6, 29, 30, 28}, {6, 13, 37, 38}, {6, 31, 0, 30}, {5, 58, 40, 60}, {6, 21, 49, 23}, {6, 1, 43, 33}, {6, 7, 36, 9}, {6, 17, 41, 19}, {6, 27, 46, 47}, {6, 3, 34, 5}, {6, 15, 38, 39}, {6, 23, 48, 44}, {6, 11, 36, 37}, {6, 19, 42, 21}, {6, 52, 54, 31}, {6, 5, 35, 7}, {6, 15, 40, 17}, {6, 25, 44, 45}, {6, 3, 33, 32}, {4, 47, 46, 44}, {5, 40, 39, 60}, {5, 39, 38, 32}, {5, 60, 39, 61}, {5, 38, 37, 34}, {5, 37, 36, 35}, {5, 34, 37, 35}, {5, 34, 32, 38}, {5, 32, 33, 61}, {5, 61, 33, 59}, {5, 33, 43, 57}, {5, 43, 54, 55}, {5, 43, 55, 57}, {5, 42, 41, 56}, {5, 41, 40, 58}, {5, 56, 41, 58}, {5, 51, 49, 42}, {5, 56, 51, 42}, {5, 61, 39, 32}, {5, 33, 57, 59}, {4, 45, 44, 46}, {4, 44, 48, 47}, {4, 48, 49, 50}, {4, 49, 51, 53}, {4, 48, 50, 47}, {4, 51, 56, 54}, {4, 56, 58, 55}, {4, 54, 56, 55}, {4, 58, 60, 59}, {4, 60, 61, 59}, {4, 59, 57, 58}, {4, 57, 55, 58}, {4, 54, 52, 51}, {4, 52, 53, 51}, {4, 53, 50, 49}, {6, 0, 3, 2}, {6, 2, 3, 5}, {6, 4, 5, 7}, {6, 6, 7, 9}, {6, 9, 11, 10}, {6, 11, 13, 12}, {6, 13, 15, 14}, {6, 15, 17, 16}, {6, 16, 17, 19}, {6, 18, 19, 21}, {6, 20, 21, 23}, {6, 22, 23, 25}, {6, 25, 27, 26}, {6, 27, 29, 28}, {6, 29, 31, 30}, {6, 13, 11, 37}, {6, 31, 1, 0}, {6, 21, 42, 49}, {6, 1, 31, 43}, {6, 7, 35, 36}, {6, 17, 40, 41}, {6, 53, 29, 50}, {6, 29, 27, 47}, {6, 50, 29, 47}, {6, 3, 32, 34}, {6, 15, 13, 38}, {6, 44, 25, 23}, {6, 23, 49, 48}, {6, 11, 9, 36}, {6, 19, 41, 42}, {6, 43, 31, 54}, {6, 31, 29, 53}, {6, 52, 31, 53}, {6, 5, 34, 35}, {6, 15, 39, 40}, {6, 46, 27, 45}, {6, 27, 25, 45}, {6, 3, 1, 33}, {6, 0, 1, 3}};

/* @ 040039CC */
static struct GdFaceData faces_mario_eye_right = { FACE_NUM, 0x1, facedata_mario_eye_right };
#undef FACE_NUM

/* @ 040039D8 */
struct DynList dynlist_mario_eye_right[40] = {
    StartList(),
    MakeDynObj(D_DATA_GRP, 0x71),
    LinkWithPtr(&vtx_mario_eye_right),
    MakeDynObj(D_DATA_GRP, 0x72),
    LinkWithPtr(&faces_mario_eye_right),
    StartGroup(0x73),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(0),
    SetAmbient(0.0, 0.29100000858306885, 1.0),
    SetDiffuse(0.0, 0.29100000858306885, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(1),
    SetAmbient(0.0, 0.5759999752044678, 1.0),
    SetDiffuse(0.0, 0.5759999752044678, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(2),
    SetAmbient(0.0, 0.0, 0.0),
    SetDiffuse(0.0, 0.0, 0.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(3),
    SetAmbient(1.0, 1.0, 1.0),
    SetDiffuse(1.0, 1.0, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(4),
    SetAmbient(1.0, 1.0, 1.0),
    SetDiffuse(1.0, 1.0, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(5),
    SetAmbient(0.0, 0.0, 0.0),
    SetDiffuse(0.0, 0.0, 0.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(6),
    SetAmbient(0.3662527799606323, 0.22696582973003387, 0.10224173218011856),
    SetDiffuse(0.3662527799606323, 0.22696582973003387, 0.10224173218011856),
    EndGroup(0x73),
    MakeDynObj(D_SHAPE, 0x74),
    SetNodeGroup(0x71),
    SetPlaneGroup(0x72),
    SetMaterialGroup(0x73),
    StopList(),
};








#define VTX_NUM 62 
/* @ 04003C78 */
static s16 verts_mario_eye_left[VTX_NUM][3] = {{242, 25, -67}, {281, 22, -67}, {242, 25, -112}, {281, 23, -106}, {242, 20, -151}, {281, 17, -140}, {242, 9, -177}, {281, 7, -163}, {242, -4, -187}, {281, -6, -172}, {242, -20, -180}, {281, -21, -166}, {242, -36, -156}, {281, -35, -145}, {242, -48, -119}, {281, -46, -112}, {242, -54, -74}, {281, -52, -74}, {242, -55, -29}, {281, -53, -35}, {242, -50, 9}, {281, -47, -1}, {242, -39, 35}, {281, -37, 21}, {242, -25, 45}, {281, -23, 30}, {242, -9, 38}, {281, -8, 24}, {242, 6, 14}, {281, 5, 3}, {242, 18, -23}, {281, 16, -29}, {288, 14, -104}, {288, 14, -76}, {288, 10, -128}, {288, 2, -145}, {288, -8, -151}, {288, -20, -147}, {288, -31, -132}, {288, -39, -109}, {288, -44, -81}, {288, -44, -53}, {288, -40, -28}, {288, 10, -48}, {288, -24, 15}, {288, -17, 19}, {288, -9, 16}, {288, -2, 6}, {288, -29, 4}, {288, -32, -13}, {288, 3, -8}, {288, -32, -29}, {288, 6, -26}, {288, 4, -15}, {288, 6, -38}, {288, 6, -44}, {288, -29, -48}, {288, 3, -60}, {288, -23, -63}, {288, -1, -71}, {288, -16, -73}, {288, -8, -76}};

/* @ 04003D98 */
static struct GdVtxData vtx_mario_eye_left = { VTX_NUM, 0x1, verts_mario_eye_left };
#undef VTX_NUM

#define FACE_NUM 106 
/* @ 04003DA4 */
static u16 facedata_mario_eye_left[FACE_NUM][4] = {{10, 2, 5, 4}, {10, 4, 7, 6}, {10, 6, 9, 8}, {10, 9, 10, 8}, {10, 11, 12, 10}, {10, 13, 14, 12}, {10, 15, 16, 14}, {10, 16, 19, 18}, {10, 18, 21, 20}, {10, 20, 23, 22}, {10, 22, 25, 24}, {10, 25, 26, 24}, {10, 27, 28, 26}, {10, 29, 30, 28}, {10, 13, 37, 38}, {10, 31, 0, 30}, {9, 58, 40, 60}, {10, 21, 49, 23}, {10, 1, 43, 33}, {10, 7, 36, 9}, {10, 17, 41, 19}, {10, 27, 46, 47}, {10, 3, 34, 5}, {10, 15, 38, 39}, {10, 23, 48, 44}, {10, 11, 36, 37}, {10, 19, 42, 21}, {10, 52, 54, 31}, {10, 5, 35, 7}, {10, 15, 40, 17}, {10, 25, 44, 45}, {10, 3, 33, 32}, {8, 47, 46, 44}, {9, 40, 39, 60}, {9, 39, 38, 32}, {9, 60, 39, 61}, {9, 38, 37, 34}, {9, 37, 36, 35}, {9, 34, 37, 35}, {9, 34, 32, 38}, {9, 32, 33, 61}, {9, 61, 33, 59}, {9, 33, 43, 57}, {9, 43, 54, 55}, {9, 43, 55, 57}, {9, 42, 41, 56}, {9, 41, 40, 58}, {9, 56, 41, 58}, {9, 51, 49, 42}, {9, 56, 51, 42}, {9, 61, 39, 32}, {9, 33, 57, 59}, {8, 45, 44, 46}, {8, 44, 48, 47}, {8, 48, 49, 50}, {8, 49, 51, 53}, {8, 48, 50, 47}, {8, 51, 56, 54}, {8, 56, 58, 55}, {8, 54, 56, 55}, {8, 58, 60, 59}, {8, 60, 61, 59}, {8, 59, 57, 58}, {8, 57, 55, 58}, {8, 54, 52, 51}, {8, 52, 53, 51}, {8, 53, 50, 49}, {10, 0, 3, 2}, {10, 2, 3, 5}, {10, 4, 5, 7}, {10, 6, 7, 9}, {10, 9, 11, 10}, {10, 11, 13, 12}, {10, 13, 15, 14}, {10, 15, 17, 16}, {10, 16, 17, 19}, {10, 18, 19, 21}, {10, 20, 21, 23}, {10, 22, 23, 25}, {10, 25, 27, 26}, {10, 27, 29, 28}, {10, 29, 31, 30}, {10, 13, 11, 37}, {10, 31, 1, 0}, {10, 21, 42, 49}, {10, 1, 31, 43}, {10, 7, 35, 36}, {10, 17, 40, 41}, {10, 53, 29, 50}, {10, 29, 27, 47}, {10, 50, 29, 47}, {10, 3, 32, 34}, {10, 15, 13, 38}, {10, 44, 25, 23}, {10, 23, 49, 48}, {10, 11, 9, 36}, {10, 19, 41, 42}, {10, 43, 31, 54}, {10, 31, 29, 53}, {10, 52, 31, 53}, {10, 5, 34, 35}, {10, 15, 39, 40}, {10, 46, 27, 45}, {10, 27, 25, 45}, {10, 3, 1, 33}, {10, 0, 1, 3}};

/* @ 04004034 */
static struct GdFaceData faces_mario_eye_left = { FACE_NUM, 0x1, facedata_mario_eye_left };
#undef FACE_NUM

/* @ 04004040 */
struct DynList dynlist_mario_eye_left[56] = {
    StartList(),
    MakeDynObj(D_DATA_GRP, 0x61),
    LinkWithPtr(&vtx_mario_eye_left),
    MakeDynObj(D_DATA_GRP, 0x62),
    LinkWithPtr(&faces_mario_eye_left),
    StartGroup(0x63),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(0),
    SetAmbient(0.0, 0.29100000858306885, 1.0),
    SetDiffuse(0.0, 0.29100000858306885, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(1),
    SetAmbient(0.0, 0.5759999752044678, 1.0),
    SetDiffuse(0.0, 0.5759999752044678, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(2),
    SetAmbient(0.0, 0.0, 0.0),
    SetDiffuse(0.0, 0.0, 0.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(3),
    SetAmbient(1.0, 1.0, 1.0),
    SetDiffuse(1.0, 1.0, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(4),
    SetAmbient(0.0, 0.29100000858306885, 1.0),
    SetDiffuse(0.0, 0.29100000858306885, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(5),
    SetAmbient(0.0, 0.5759999752044678, 1.0),
    SetDiffuse(0.0, 0.5759999752044678, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(6),
    SetAmbient(0.0, 0.0, 0.0),
    SetDiffuse(0.0, 0.0, 0.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(7),
    SetAmbient(1.0, 1.0, 1.0),
    SetDiffuse(1.0, 1.0, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(8),
    SetAmbient(1.0, 1.0, 1.0),
    SetDiffuse(1.0, 1.0, 1.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(9),
    SetAmbient(0.0, 0.0, 0.0),
    SetDiffuse(0.0, 0.0, 0.0),
    MakeDynObj(D_MATERIAL, 0x0),
    SetId(10),
    SetAmbient(0.3662527799606323, 0.22696582973003387, 0.10224173218011856),
    SetDiffuse(0.3662527799606323, 0.22696582973003387, 0.10224173218011856),
    EndGroup(0x63),
    MakeDynObj(D_SHAPE, 0x64),
    SetNodeGroup(0x61),
    SetPlaneGroup(0x62),
    SetMaterialGroup(0x63),
    StopList(),
};
