#pragma once

#include "Definitions.h"

/* Mathematical constants */
#define TWO_PI         6.28318548f  // Single-precision value of 2 * Pi
#define PI             3.14159274f  // Single-precision value of Pi
#define HALF_PI        1.57079637f  // Single-precision value of Pi / 2
#define INV_PI         0.318309873f // Single-precision value of 1 / Pi

/* Rendering settings */
#define WINDOW_RES     1024         // Camera resolution
#define MAX_FRAMES     30           // Max. number of frames before convergence is achieved
#define MAX_VOL_SAMP   32           // Max. number of volume samples per pixel
#define MAX_N_VBOS     8            // Maximal number of vertex buffers
#define MAX_DIST       1000.0f      // Camera distance to far plane
#define PRI_SM_RES     1024         // Primary shadow map resolution in one dimension
#define SEC_SM_RES     64           // Secondary shadow map resolution in one dimension
#define N_GI_BOUNCES   3            // Number of light bounces for GI
#define MAX_MATERIALS  8            // Max. number of materials
#define MAX_N_VPLS     150          // Max. number of VPLs
#define MAX_N_FAILS    1000         // Max. number of failed attempts to trace a path
#define PACKET_SZ      8            // Ray packet size for packet tracing
#define RAY_OFFSET     1E-4f        // Offset in normal direction to avoid self-intersections
#define TRI_EPS        1E-4f        // Small epsilon value used by triangle intersector
#define SURVIVAL_P_RR  0.95f        // Survival probability for Russian Roulette
#define EXPOSURE       12           // Default exposure time
#define THRESHOLD_MS   500          // Used to ignore repeated key activations
#define TITLE_LEN      70           // Number of characters in window title
#define PRIM_PL_POS    {278.2f, \
                        600.0f, \
                        279.5f}     // Primary point light position
#define PRIM_PL_INTENS {85000.f, \
                        75000.f, \
                        75000.f}    // Primary point light intensity

/* Fog properties */
#define ABS_K          1E-5f        // Absorption coefficient per unit density
#define SCA_K          1E-2f        // Scattering coefficient per unit density
#define MAJ_EXT_K      0.010001f    // Majorant extinction coefficient
#define MAX_FOG_HEIGHT 548.8f       // Height limit of fog (for VPLs)
#define HG_G           0.25f        // Henyey-Greenstein func. scattering asymmetry parameter
#define N_OCTAVES      6            // Number of octaves for simplex noise

/* Texture unit allocation */
#define TEX_U_DENS_V   0            // DensityField (for fog)
#define TEX_U_PPL_SM   1            // Primary point light (PPL) shadow map
#define TEX_U_VPL_SM   2            // Virtual Point Light (VPL) shadow map
#define TEX_U_ACCUM    3            // Accumulation buffer texture for progressive rendering
#define TEX_U_PI_DENS  4            // Preintegrated fog density values
#define TEX_U_HALTON   5            // Halton sequence texture buffer object
#define TEX_U_W_POS    6            // World position texture
#define TEX_U_W_NORM   7            // Normal vector texture
#define TEX_U_MAT_ID   8            // Material id texture
#define TEX_U_FOG_DIST 9            // Primary ray entry/exit distances for fog
#define TEX_U_VOL_COMP 10           // Subsampled volume contribution (radiance)
#define TEX_U_RND_OFF  11           // Primary (camera) rays' random offset texture
#define TEX_U_DEPTH    12           // Depth buffer texture

/* Image unit allocation */
#define IMG_U_ACCUM    0            // Accumulation buffer texture for progressive rendering
#define IMG_U_FOG_DIST 1            // Primary ray entry/exit distances for fog

/* Uniform locations */
#define UL_SM_MODELMAT 0            // Model matrix
#define UL_SM_LIGHTMVP 1            // 6 of them: 1..6
#define UL_SM_LAYER_ID 7            // layer_id
#define UL_SM_WPOS_VPL 8            // VPL position in world coordinates
#define UL_SM_INVMAXD2 9            // Inverse max. distance squared
#define UL_GB_MAT_ID   0            // Material index

/* Uniform binding indices */
#define UB_MAT_ARR     0            // Material array
#define UB_PPL_ARR     1            // Primary point light (PPL) array
#define UB_VPL_ARR     2            // Virtual Point Light (VPL) array

/* Misc. OpenGL definitions */
#define GL_FALSE       0            // gl::FALSE_
#define GL_TRUE        1            // gl::TRUE_
#define DEFAULT_FBO    0            // Rendering framebuffer OpenGL handle
