#pragma region Copyright (c) 2014-2016 OpenRCT2 Developers
/*****************************************************************************
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * OpenRCT2 is the work of many authors, a full list can be found in contributors.md
 * For more information, visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * A full copy of the GNU General Public License can be found in licence.txt
 *****************************************************************************/
#pragma endregion

#pragma once

#if OPENGL_NO_LINK

// BEGIN [Do not define 1.1 function signatures]
#define glActiveTexture     __static__glActiveTexture
#define glBegin             __static__glBegin
#define glBindTexture       __static__glBindTexture
#define glBlendFunc         __static__glBlendFunc
#define glClear             __static__glClear
#define glClearColor        __static__glClearColor
#define glColor3f           __static__glColor3f
#define glColor4f           __static__glColor4f
#define glCullFace          __static__glCullFace
#define glDeleteTextures    __static__glDeleteTextures
#define glDisable           __static__glDisable
#define glDrawArrays        __static__glDrawArrays
#define glEnable            __static__glEnable
#define glEnd               __static__glEnd
#define glGenTextures       __static__glGenTextures
#define glGetError          __static__glGetError
#define glLoadIdentity      __static__glLoadIdentity
#define glMatrixMode        __static__glMatrixMode
#define glOrtho             __static__glOrtho
#define glReadPixels        __static__glReadPixels
#define glScalef            __static__glScalef
#define glTexCoord2f        __static__glTexCoord2f
#define glTexImage2D        __static__glTexImage2D
#define glTexParameteri     __static__glTexParameteri
#define glTranslatef        __static__glTranslatef
#define glVertex2i          __static__glVertex2i
#define glViewport          __static__glViewport

#endif

#include <SDL_opengl.h>

#if OPENGL_NO_LINK

// END [Do not define 1.1 function signatures]
#undef glActiveTexture
#undef glBegin
#undef glBindTexture
#undef glBlendFunc
#undef glClear
#undef glClearColor
#undef glColor3f
#undef glColor4f
#undef glCullFace
#undef glDeleteTextures
#undef glDisable
#undef glDrawArrays
#undef glEnable
#undef glEnd
#undef glGenTextures
#undef glGetError
#undef glLoadIdentity
#undef glMatrixMode
#undef glOrtho
#undef glReadPixels
#undef glScalef
#undef glTexCoord2f
#undef glTexImage2D
#undef glTexParameteri
#undef glTranslatef
#undef glVertex2i
#undef glViewport

// 1.1 function signatures
typedef void   (APIENTRYP PFNGLBEGINPROC         )(GLenum mode);
typedef void   (APIENTRYP PFNGLBINDTEXTUREPROC   )(GLenum target, GLuint texture);
typedef void   (APIENTRYP PFNGLBLENDFUNCPROC     )(GLenum sfactor, GLenum dfactor);
typedef void   (APIENTRYP PFNGLCLEARPROC         )(GLbitfield mask);
typedef void   (APIENTRYP PFNGLCLEARCOLORPROC    )(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef void   (APIENTRYP PFNGLCOLOR3FPROC       )(GLfloat red, GLfloat green, GLfloat blue);
typedef void   (APIENTRYP PFNGLCOLOR4FPROC       )(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void   (APIENTRYP PFNGLCULLFACEPROC      )(GLenum mode);
typedef void   (APIENTRYP PFNGLDELETETEXTURESPROC)(GLsizei n, const GLuint *textures);
typedef void   (APIENTRYP PFNGLDISABLEPROC       )(GLenum cap);
typedef void   (APIENTRYP PFNGLDRAWARRAYSPROC    )(GLenum mode, GLint first, GLsizei count);
typedef void   (APIENTRYP PFNGLENABLEPROC        )(GLenum cap);
typedef void   (APIENTRYP PFNGLENDPROC           )(void);
typedef GLenum (APIENTRYP PFNGLGETERRORPROC      )(void);
typedef void   (APIENTRYP PFNGLGENTEXTURESPROC   )(GLsizei n, GLuint *textures);
typedef void   (APIENTRYP PFNGLLOADIDENTITYPROC  )(void);
typedef void   (APIENTRYP PFNGLMATRIXMODEPROC    )(GLenum mode);
typedef void   (APIENTRYP PFNGLORTHOPROC         )(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val);
typedef void   (APIENTRYP PFNGLREADPIXELSPROC    )(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels);
typedef void   (APIENTRYP PFNGLSCALEFPROC        )(GLfloat x, GLfloat y, GLfloat z);
typedef void   (APIENTRYP PFNGLTEXCOORD2FPROC    )(GLfloat s, GLfloat t);
typedef void   (APIENTRYP PFNGLTEXIMAGE2DPROC    )(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
typedef void   (APIENTRYP PFNGLTEXPARAMETERIPROC )(GLenum target, GLenum pname, GLint param);
typedef void   (APIENTRYP PFNGLTRANSLATEFPROC    )(GLfloat x, GLfloat y, GLfloat z);
typedef void   (APIENTRYP PFNGLVERTEX2IPROC      )(GLint x, GLint y);
typedef void   (APIENTRYP PFNGLVIEWPORTPROC      )(GLint x, GLint y, GLsizei width, GLsizei height);

#ifdef NO_EXTERN_GLAPI
    // Defines the function pointers
    #define GLAPI_DECL
    #define GLAPI_SET   = nullptr
#else
    // Defines the functions as "extern"
    #define GLAPI_DECL  extern
    #define GLAPI_SET
#endif

// 1.1 function pointers
GLAPI_DECL PFNGLACTIVETEXTUREPROC               glActiveTexture             GLAPI_SET;
GLAPI_DECL PFNGLBEGINPROC                       glBegin                     GLAPI_SET;
GLAPI_DECL PFNGLBINDTEXTUREPROC                 glBindTexture               GLAPI_SET;
GLAPI_DECL PFNGLBLENDFUNCPROC                   glBlendFunc                 GLAPI_SET;
GLAPI_DECL PFNGLCLEARPROC                       glClear                     GLAPI_SET;
GLAPI_DECL PFNGLCLEARCOLORPROC                  glClearColor                GLAPI_SET;
GLAPI_DECL PFNGLCOLOR3FPROC                     glColor3f                   GLAPI_SET;
GLAPI_DECL PFNGLCOLOR4FPROC                     glColor4f                   GLAPI_SET;
GLAPI_DECL PFNGLCULLFACEPROC                    glCullFace                  GLAPI_SET;
GLAPI_DECL PFNGLDELETETEXTURESPROC              glDeleteTextures            GLAPI_SET;
GLAPI_DECL PFNGLDISABLEPROC                     glDisable                   GLAPI_SET;
GLAPI_DECL PFNGLDRAWARRAYSPROC                  glDrawArrays                GLAPI_SET;
GLAPI_DECL PFNGLENABLEPROC                      glEnable                    GLAPI_SET;
GLAPI_DECL PFNGLENDPROC                         glEnd                       GLAPI_SET;
GLAPI_DECL PFNGLGENTEXTURESPROC                 glGenTextures               GLAPI_SET;
GLAPI_DECL PFNGLGETERRORPROC                    glGetError                  GLAPI_SET;
GLAPI_DECL PFNGLLOADIDENTITYPROC                glLoadIdentity              GLAPI_SET;
GLAPI_DECL PFNGLMATRIXMODEPROC                  glMatrixMode                GLAPI_SET;
GLAPI_DECL PFNGLORTHOPROC                       glOrtho                     GLAPI_SET;
GLAPI_DECL PFNGLREADPIXELSPROC                  glReadPixels                GLAPI_SET;
GLAPI_DECL PFNGLSCALEFPROC                      glScalef                    GLAPI_SET;
GLAPI_DECL PFNGLTEXCOORD2FPROC                  glTexCoord2f                GLAPI_SET;
GLAPI_DECL PFNGLTEXIMAGE2DPROC                  glTexImage2D                GLAPI_SET;
GLAPI_DECL PFNGLTEXPARAMETERIPROC               glTexParameteri             GLAPI_SET;
GLAPI_DECL PFNGLTRANSLATEFPROC                  glTranslatef                GLAPI_SET;
GLAPI_DECL PFNGLVERTEX2IPROC                    glVertex2i                  GLAPI_SET;
GLAPI_DECL PFNGLVIEWPORTPROC                    glViewport                  GLAPI_SET;

// 2.0+ function pointers
GLAPI_DECL PFNGLATTACHSHADERPROC                glAttachShader              GLAPI_SET;
GLAPI_DECL PFNGLBINDBUFFERPROC                  glBindBuffer                GLAPI_SET;
GLAPI_DECL PFNGLBINDFRAGDATALOCATIONPROC        glBindFragDataLocation      GLAPI_SET;
GLAPI_DECL PFNGLBINDFRAMEBUFFERPROC             glBindFramebuffer           GLAPI_SET;
GLAPI_DECL PFNGLBINDVERTEXARRAYPROC             glBindVertexArray           GLAPI_SET;
GLAPI_DECL PFNGLBUFFERDATAPROC                  glBufferData                GLAPI_SET;
GLAPI_DECL PFNGLCOMPILESHADERPROC               glCompileShader             GLAPI_SET;
GLAPI_DECL PFNGLCREATEPROGRAMPROC               glCreateProgram             GLAPI_SET;
GLAPI_DECL PFNGLCREATESHADERPROC                glCreateShader              GLAPI_SET;
GLAPI_DECL PFNGLDELETEBUFFERSPROC               glDeleteBuffers             GLAPI_SET;
GLAPI_DECL PFNGLDELETEFRAMEBUFFERSPROC          glDeleteFramebuffers        GLAPI_SET;
GLAPI_DECL PFNGLDELETEPROGRAMPROC               glDeleteProgram             GLAPI_SET;
GLAPI_DECL PFNGLDELETESHADERPROC                glDeleteShader              GLAPI_SET;
GLAPI_DECL PFNGLDELETEVERTEXARRAYSPROC          glDeleteVertexArrays        GLAPI_SET;
GLAPI_DECL PFNGLDETACHSHADERPROC                glDetachShader              GLAPI_SET;
GLAPI_DECL PFNGLENABLEVERTEXATTRIBARRAYPROC     glEnableVertexAttribArray   GLAPI_SET;
GLAPI_DECL PFNGLFRAMEBUFFERTEXTURE2DPROC        glFramebufferTexture2D      GLAPI_SET;
GLAPI_DECL PFNGLGETATTRIBLOCATIONPROC           glGetAttribLocation         GLAPI_SET;
GLAPI_DECL PFNGLGENBUFFERSPROC                  glGenBuffers                GLAPI_SET;
GLAPI_DECL PFNGLGENFRAMEBUFFERSPROC             glGenFramebuffers           GLAPI_SET;
GLAPI_DECL PFNGLGETPROGRAMINFOLOGPROC           glGetProgramInfoLog         GLAPI_SET;
GLAPI_DECL PFNGLGETPROGRAMIVPROC                glGetProgramiv              GLAPI_SET;
GLAPI_DECL PFNGLGETSHADERINFOLOGPROC            glGetShaderInfoLog          GLAPI_SET;
GLAPI_DECL PFNGLGETSHADERIVPROC                 glGetShaderiv               GLAPI_SET;
GLAPI_DECL PFNGLGETUNIFORMLOCATIONPROC          glGetUniformLocation        GLAPI_SET;
GLAPI_DECL PFNGLGENVERTEXARRAYSPROC             glGenVertexArrays           GLAPI_SET;
GLAPI_DECL PFNGLLINKPROGRAMPROC                 glLinkProgram               GLAPI_SET;
GLAPI_DECL PFNGLSHADERSOURCEPROC                glShaderSource              GLAPI_SET;
GLAPI_DECL PFNGLUNIFORM1IPROC                   glUniform1i                 GLAPI_SET;
GLAPI_DECL PFNGLUNIFORM2IPROC                   glUniform2i                 GLAPI_SET;
GLAPI_DECL PFNGLUNIFORM4FPROC                   glUniform4f                 GLAPI_SET;
GLAPI_DECL PFNGLUNIFORM4IPROC                   glUniform4i                 GLAPI_SET;
GLAPI_DECL PFNGLUSEPROGRAMPROC                  glUseProgram                GLAPI_SET;
GLAPI_DECL PFNGLVERTEXATTRIBIPOINTERPROC        glVertexAttribIPointer      GLAPI_SET;
GLAPI_DECL PFNGLVERTEXATTRIBPOINTERPROC         glVertexAttribPointer       GLAPI_SET;

#endif /* OPENGL_NO_LINK */

namespace OpenGLAPI
{
    bool Initialise();
}
