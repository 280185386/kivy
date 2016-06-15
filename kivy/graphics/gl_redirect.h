/**
 * Redirect the inclusion of GL file to the selected provider
 */
#ifndef __gl_redirect_h_
#define __gl_redirect_h_

#include "config.h"

#if defined(_WIN32) && __USE_GLEW
#include <GL/glew.h>

#define GL_FIXED                                    0x140C
#define GL_MAX_VERTEX_UNIFORM_VECTORS               0x8DFB
#define GL_MAX_VARYING_VECTORS                      0x8DFC
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS             0x8DFD
#define GL_IMPLEMENTATION_COLOR_READ_TYPE           0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT         0x8B9B
#define GL_SHADER_COMPILER                          0x8DFA
#define GL_NUM_SHADER_BINARY_FORMATS                0x8DF9
#define GL_LOW_FLOAT                                0x8DF0
#define GL_MEDIUM_FLOAT                             0x8DF1
#define GL_HIGH_FLOAT                               0x8DF2
#define GL_LOW_INT                                  0x8DF3
#define GL_MEDIUM_INT                               0x8DF4
#define GL_HIGH_INT                                 0x8DF5
#define GL_SHADER_BINARY_FORMATS                    0x8DF8
#define GL_RGB565                                   0x8D62
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS        0x8CD9
#define GL_FRAMEBUFFER_UNDEFINED_OES                0x8219
#define GL_DEPTH24_STENCIL8_OES                     0x88F0

#include <windows.h>
#include <string.h>
#else

#define GL_GLEXT_PROTOTYPES
#include "GLES2/gl2.h"
#include "GLES2/gl2ext.h"
#endif /* _WIN32 */

#endif /* __gl_redirect_h_ */
