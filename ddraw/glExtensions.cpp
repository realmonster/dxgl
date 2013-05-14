// DXGL
// Copyright (C) 2011-2013 William Feely

// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

#include "common.h"
#include "glExtensions.h"

GLuint (APIENTRY *glCreateShader) (GLenum type) = NULL;
void (APIENTRY *glShaderSource) (GLuint shader, GLsizei count, const GLchar* const* string, const GLint* length) = NULL;
void (APIENTRY *glCompileShader) (GLuint shader) = NULL;
void (APIENTRY *glDeleteShader) (GLuint shader) = NULL;
GLuint (APIENTRY *glCreateProgram) () = NULL;
void (APIENTRY *glDeleteProgram) (GLuint program) = NULL;
void (APIENTRY *glGetProgramiv) (GLuint program, GLenum pname, GLint* params) = NULL;
void (APIENTRY *glAttachShader) (GLuint program, GLuint shader) = NULL;
void (APIENTRY *glDetachShader) (GLuint program, GLuint shader) = NULL;
void (APIENTRY *glLinkProgram) (GLuint program) = NULL;
void (APIENTRY *glUseProgram) (GLuint program) = NULL;
void (APIENTRY *glGetShaderiv) (GLuint shader, GLenum pname, GLint* params) = NULL;
void (APIENTRY *glGetShaderInfoLog) (GLuint shader, GLsizei maxLength, GLsizei *length, GLchar *infoLog) = NULL;
void (APIENTRY *glGetProgramInfoLog) (GLuint program, GLsizei maxLength, GLsizei *length, GLchar *infolog) = NULL;

GLint (APIENTRY *glGetAttribLocation) (GLuint program, const GLchar* name) = NULL;
void (APIENTRY *glVertexAttribPointer) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer) = NULL;
void (APIENTRY *glEnableVertexAttribArray) (GLuint index) = NULL;
void (APIENTRY *glDisableVertexAttribArray) (GLuint index) = NULL;

void (APIENTRY *glGenFramebuffers) (GLsizei n, GLuint* ids) = NULL;
void (APIENTRY *glBindFramebuffer) (GLenum target, GLuint framebuffer) = NULL;
void (APIENTRY *glGenRenderbuffers) (GLsizei n, GLuint* renderbuffers) = NULL;
void (APIENTRY *glBindRenderbuffer) (GLenum target, GLuint renderbuffer) = NULL;
void (APIENTRY *glFramebufferTexture2D) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) = NULL;
GLenum (APIENTRY *glCheckFramebufferStatus) (GLenum target) = NULL;
void (APIENTRY *glDeleteFramebuffers) (GLsizei n, const GLuint *framebuffers) = NULL;

void (APIENTRY *glGenFramebuffersEXT) (GLsizei n, GLuint* ids) = NULL;
void (APIENTRY *glBindFramebufferEXT) (GLenum target, GLuint framebuffer) = NULL;
void (APIENTRY *glGenRenderbuffersEXT) (GLsizei n, GLuint* renderbuffers) = NULL;
void (APIENTRY *glBindRenderbufferEXT) (GLenum target, GLuint renderbuffer) = NULL;
void (APIENTRY *glFramebufferTexture2DEXT) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) = NULL;
GLenum (APIENTRY *glCheckFramebufferStatusEXT) (GLenum target) = NULL;
void (APIENTRY *glDeleteFramebuffersEXT) (GLsizei n, const GLuint *framebuffers) = NULL;

GLint (APIENTRY *glGetUniformLocation) (GLuint program, const GLchar* name) = NULL;
void (APIENTRY *glUniform1i) (GLint location, GLint v0) = NULL;
void (APIENTRY *glUniform2i) (GLint location, GLint v0, GLint v1) = NULL;
void (APIENTRY *glUniform3i) (GLint location, GLint v0, GLint v1, GLint v2) = NULL;
void (APIENTRY *glUniform4i) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3) = NULL;
void (APIENTRY *glUniform4iv) (GLint location, GLsizei count, const GLint* value) = NULL;
void (APIENTRY *glUniform1f) (GLint location, GLfloat v0) = NULL;
void (APIENTRY *glUniform2f) (GLint location, GLfloat v0, GLfloat v1) = NULL;
void (APIENTRY *glUniform3f) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2) = NULL;
void (APIENTRY *glUniform4f) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) = NULL;
void (APIENTRY *glUniform3fv) (GLint location, GLsizei count, const GLfloat* value) = NULL;
void (APIENTRY *glUniform4fv) (GLint location, GLsizei count, const GLfloat* value) = NULL;
void (APIENTRY *glUniformMatrix3fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) = NULL;
void (APIENTRY *glUniformMatrix4fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) = NULL;

void (APIENTRY *glDrawRangeElements) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);

void (APIENTRY *glActiveTexture)(GLenum texture) = NULL;
void (APIENTRY *glClientActiveTexture) (GLenum texture) = NULL;

void (APIENTRY *glGenBuffers)(GLsizei n, GLuint* buffers) = NULL;
void (APIENTRY *glDeleteBuffers)(GLsizei n, const GLuint* buffers) = NULL;
void (APIENTRY *glBindBuffer)(GLenum target, GLuint buffer) = NULL;
void (APIENTRY *glBufferData)(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage) = NULL;
void* (APIENTRY *glMapBuffer)(GLenum target, GLenum access) = NULL;
GLboolean (APIENTRY *glUnmapBuffer)(GLenum target) = NULL;

BOOL (APIENTRY *wglSwapIntervalEXT)(int interval) = NULL;
int (APIENTRY *wglGetSwapIntervalEXT)() = NULL;

void (APIENTRY *glTextureParameterfEXT)(GLuint texture, GLenum target, GLenum pname, GLfloat param) = NULL;
void (APIENTRY *glTextureParameterfvEXT)(GLuint texture, GLenum target, GLenum pname, const GLfloat *params) = NULL;
void (APIENTRY *glTextureParameteriEXT)(GLuint texture, GLenum target, GLenum pname, GLint param) = NULL;
void (APIENTRY *glTextureParameterivEXT)(GLuint texture, GLenum target, GLenum pname, const GLint *params) = NULL;
void (APIENTRY *glTextureImage2DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat,
										   GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels) = NULL;
void (APIENTRY *glTextureSubImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset,
											  GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels) = NULL;
void (APIENTRY *glMatrixLoadfEXT)(GLenum mode, const GLfloat *m) = NULL;
void (APIENTRY *glMatrixMultfEXT)(GLenum mode, const GLfloat *m) = NULL;

void (APIENTRY *glBindSampler)(GLuint unit, GLuint sampler) = NULL;
void (APIENTRY *glDeleteSamplers)(GLsizei n, const GLuint *samplers) = NULL;
void (APIENTRY *glGenSamplers)(GLsizei n, GLuint *samplers) = NULL;
void (APIENTRY *glSamplerParameterf)(GLuint sampler, GLenum pname, GLfloat param) = NULL;
void (APIENTRY *glSamplerParameteri)(GLuint sampler, GLenum pname, GLint param) = NULL;
void (APIENTRY *glSamplerParameterfv)(GLuint sampler, GLenum pname, const GLfloat *params) = NULL;
void (APIENTRY *glSamplerParameteriv)(GLuint sampler, GLenum pname, const GLint *params) = NULL;

int GLEXT_ARB_framebuffer_object = 0;
int GLEXT_EXT_framebuffer_object = 0;
int GLEXT_NV_packed_depth_stencil = 0;
int GLEXT_EXT_packed_depth_stencil = 0;
int GLEXT_ARB_depth_buffer_float = 0;
int GLEXT_ARB_depth_texture = 0;
int GLEXT_NVX_gpu_memory_info = 0;
int GLEXT_ATI_meminfo = 0;
int GLEXT_ARB_ES2_compatibility = 0;
int GLEXT_EXT_direct_state_access = 0;
int GLEXT_ARB_sampler_objects = 0;
int glver_major, glver_minor = 0;
bool atimem = false;

void InitGLExt()
{
	const GLubyte *glversion = glGetString(GL_VERSION);
	glver_minor = 0;
	if(!sscanf((char*)glversion,"%d.%d",&glver_major,&glver_minor)) glver_major = 0;
	if((glver_major >= 2) || ((glver_major >= 1) && (glver_minor >= 2)))
		glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)wglGetProcAddress("glDrawRangeElements");
	if((glver_major >= 2) || ((glver_major >= 1) && (glver_minor >= 3)))
	{
		glActiveTexture = (PFNGLACTIVETEXTUREPROC)wglGetProcAddress("glActiveTexture");
		glClientActiveTexture = (PFNGLCLIENTACTIVETEXTUREPROC)wglGetProcAddress("glClientActiveTexture");
	}
	if((glver_major >= 2) || ((glver_major >= 1) && (glver_minor >= 5)))
	{
		glGenBuffers = (PFNGLGENBUFFERSPROC)wglGetProcAddress("glGenBuffers");
		glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)wglGetProcAddress("glDeleteBuffers");
		glBindBuffer = (PFNGLBINDBUFFERPROC)wglGetProcAddress("glBindBuffer");
		glBufferData = (PFNGLBUFFERDATAPROC)wglGetProcAddress("glBufferData");
		glMapBuffer = (PFNGLMAPBUFFERPROC)wglGetProcAddress("glMapBuffer");
		glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)wglGetProcAddress("glUnmapBuffer");
	}
	if(glver_major >= 2)
	{
		glCreateShader = (PFNGLCREATESHADERPROC)wglGetProcAddress("glCreateShader");
		glShaderSource = (PFNGLSHADERSOURCEPROC)wglGetProcAddress("glShaderSource");
		glCompileShader = (PFNGLCOMPILESHADERPROC)wglGetProcAddress("glCompileShader");
		glDeleteShader = (PFNGLDELETESHADERPROC)wglGetProcAddress("glDeleteShader");
		glCreateProgram = (PFNGLCREATEPROGRAMPROC)wglGetProcAddress("glCreateProgram");
		glDeleteProgram = (PFNGLDELETEPROGRAMPROC)wglGetProcAddress("glDeleteProgram");
		glGetProgramiv = (PFNGLGETPROGRAMIVPROC)wglGetProcAddress("glGetProgramiv");
		glAttachShader = (PFNGLATTACHSHADERPROC)wglGetProcAddress("glAttachShader");
		glDetachShader = (PFNGLDETACHSHADERPROC)wglGetProcAddress("glDetachShader");
		glLinkProgram = (PFNGLLINKPROGRAMPROC)wglGetProcAddress("glLinkProgram");
		glUseProgram = (PFNGLUSEPROGRAMPROC)wglGetProcAddress("glUseProgram");
		glGetShaderiv = (PFNGLGETSHADERIVPROC)wglGetProcAddress("glGetShaderiv");
		glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)wglGetProcAddress("glGetShaderInfoLog");
		glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)wglGetProcAddress("glGetProgramInfoLog");
		glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)wglGetProcAddress("glGetUniformLocation");
		glUniform1i = (PFNGLUNIFORM1IPROC)wglGetProcAddress("glUniform1i");
		glUniform2i = (PFNGLUNIFORM2IPROC)wglGetProcAddress("glUniform2i");
		glUniform3i = (PFNGLUNIFORM3IPROC)wglGetProcAddress("glUniform3i");
		glUniform4i = (PFNGLUNIFORM4IPROC)wglGetProcAddress("glUniform4i");
		glUniform4iv = (PFNGLUNIFORM4IVPROC)wglGetProcAddress("glUniform4iv");
		glUniform1f = (PFNGLUNIFORM1FPROC)wglGetProcAddress("glUniform1f");
		glUniform2f = (PFNGLUNIFORM2FPROC)wglGetProcAddress("glUniform2f");
		glUniform3f = (PFNGLUNIFORM3FPROC)wglGetProcAddress("glUniform3f");
		glUniform4f = (PFNGLUNIFORM4FPROC)wglGetProcAddress("glUniform4f");
		glUniform3fv = (PFNGLUNIFORM3FVPROC)wglGetProcAddress("glUniform3fv");
		glUniform4fv = (PFNGLUNIFORM4FVPROC)wglGetProcAddress("glUniform4fv");
		glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)wglGetProcAddress("glUniformMatrix3fv");
		glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)wglGetProcAddress("glUniformMatrix4fv");
		glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)wglGetProcAddress("glGetAttribLocation");
		glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)wglGetProcAddress("glVertexAttribPointer");
		glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)wglGetProcAddress("glEnableVertexAttribArray");
		glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)wglGetProcAddress("glDisableVertexAttribArray");
	}
	else
	{
		MessageBox(NULL,_T("DXGL requires an OpenGL 2.0 or higher compatible graphics card to function.  \
Please contact your graphics card manufacturer for an updated driver.  This program will now exit."),_T("Fatal error"),
			MB_OK|MB_ICONERROR);
		ExitProcess(-1);
	}
	const GLubyte *glextensions = glGetString(GL_EXTENSIONS);
	if(strstr((char*)glextensions,"GL_ARB_framebuffer_object") || (glver_major >= 3)) GLEXT_ARB_framebuffer_object = 1;
	else GLEXT_ARB_framebuffer_object = 0;
	if(strstr((char*)glextensions,"GL_EXT_framebuffer_object")) GLEXT_EXT_framebuffer_object = 1;
	else GLEXT_EXT_framebuffer_object = 0;
	if(strstr((char*)glextensions,"GL_NV_packed_depth_stencil")) GLEXT_NV_packed_depth_stencil = 1;
	else GLEXT_NV_packed_depth_stencil = 0;
	if(strstr((char*)glextensions,"GL_EXT_packed_depth_stencil")) GLEXT_EXT_packed_depth_stencil = 1;
	else GLEXT_EXT_packed_depth_stencil = 0;
	if(strstr((char*)glextensions,"GL_ARB_depth_buffer_float") || (glver_major >= 3)) GLEXT_ARB_depth_buffer_float = 1;
	else GLEXT_ARB_depth_buffer_float = 0;
	if(strstr((char*)glextensions,"GL_ARB_depth_texture") || (glver_major >= 2)
		|| ((glver_major >= 1) && (glver_minor >= 4))) GLEXT_ARB_depth_texture = 1;
	else GLEXT_ARB_depth_texture = 0;
	if(strstr((char*)glextensions,"GL_NVX_gpu_memory_info")) GLEXT_NVX_gpu_memory_info = 1;
	else GLEXT_NVX_gpu_memory_info = 0;
	if(strstr((char*)glextensions,"GL_ATI_meminfo")) GLEXT_ATI_meminfo = 1;
	else GLEXT_ATI_meminfo = 0;
	if(strstr((char*)glextensions,"GL_ARB_ES2_compatibility") || (glver_major >= 5)
		|| ((glver_major >= 4) && (glver_minor >= 1))) GLEXT_ARB_ES2_compatibility = 1;
	else GLEXT_ARB_ES2_compatibility = 0;
	if(strstr((char*)glextensions,"GL_EXT_direct_state_access")) GLEXT_EXT_direct_state_access = 1;
	else GLEXT_EXT_direct_state_access = 0;
	if(strstr((char*)glextensions,"GL_ARB_sampler_objects") || (glver_major >= 4)
		|| ((glver_major >= 3) && (glver_minor >= 3))) GLEXT_ARB_sampler_objects = 1;
	else GLEXT_ARB_sampler_objects = 0;
	bool broken_fbo = true;
	if(GLEXT_ARB_framebuffer_object)
	{
		glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)wglGetProcAddress("glGenFramebuffers");
		if(!glGenFramebuffers) GLEXT_ARB_framebuffer_object = 0;
		glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)wglGetProcAddress("glBindFramebuffer");
		glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)wglGetProcAddress("glGenRenderbuffers");
		glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)wglGetProcAddress("glBindRenderbuffer");
		glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)wglGetProcAddress("glFramebufferTexture2D");
		glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)wglGetProcAddress("glCheckFramebufferStatus");
		glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)wglGetProcAddress("glDeleteFramebuffers");
		broken_fbo = false;
	}
	if(GLEXT_EXT_framebuffer_object)
	{
		glGenFramebuffersEXT = (PFNGLGENFRAMEBUFFERSEXTPROC)wglGetProcAddress("glGenFramebuffersEXT");
		if(!glGenFramebuffersEXT) GLEXT_EXT_framebuffer_object = 0;
		glBindFramebufferEXT = (PFNGLBINDFRAMEBUFFEREXTPROC)wglGetProcAddress("glBindFramebufferEXT");
		glGenRenderbuffersEXT = (PFNGLGENRENDERBUFFERSEXTPROC)wglGetProcAddress("glGenRenderbuffersEXT");
		glBindRenderbufferEXT = (PFNGLBINDRENDERBUFFEREXTPROC)wglGetProcAddress("glBindRenderbufferEXT");
		glFramebufferTexture2DEXT = (PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)wglGetProcAddress("glFramebufferTexture2DEXT");
		glCheckFramebufferStatusEXT = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)wglGetProcAddress("glCheckFramebufferStatusEXT");
		glDeleteFramebuffersEXT = (PFNGLDELETEFRAMEBUFFERSEXTPROC)wglGetProcAddress("glDeleteFramebuffersEXT");
		broken_fbo = false;
	}
	if(GLEXT_EXT_direct_state_access)
	{
		glTextureParameterfEXT = (PFNGLTEXTUREPARAMETERFEXTPROC)wglGetProcAddress("glTextureParameterfEXT");
		glTextureParameterfvEXT = (PFNGLTEXTUREPARAMETERFVEXTPROC)wglGetProcAddress("glTextureParameterfvEXT");
		glTextureParameteriEXT = (PFNGLTEXTUREPARAMETERIEXTPROC)wglGetProcAddress("glTextureParameteriEXT");
		glTextureParameterivEXT = (PFNGLTEXTUREPARAMETERIVEXTPROC)wglGetProcAddress("glTextureParameterivEXT");
		glTextureImage2DEXT = (PFNGLTEXTUREIMAGE2DEXTPROC)wglGetProcAddress("glTextureImage2DEXT");
		glTextureSubImage2DEXT = (PFNGLTEXTURESUBIMAGE2DEXTPROC)wglGetProcAddress("glTextureSubImage2DEXT");
		glMatrixLoadfEXT = (PFNGLMATRIXLOADFEXTPROC)wglGetProcAddress("glMatrixLoadfEXT");
		glMatrixMultfEXT = (PFNGLMATRIXMULTFEXTPROC)wglGetProcAddress("glMatrixMultfEXT");
	}
	if(GLEXT_ARB_sampler_objects)
	{

	}
	if(broken_fbo)
	{
		MessageBox(NULL,_T("DXGL requires support for OpenGL Framebuffer Objects to function.  \
Please contact your graphics card manufacturer for an updated driver.  This program will now exit."),_T("Fatal error"),
			MB_OK|MB_ICONERROR);
		ExitProcess(-1);
	}
	wglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC)wglGetProcAddress("wglSwapIntervalEXT");
	wglGetSwapIntervalEXT = (PFNWGLGETSWAPINTERVALEXTPROC)wglGetProcAddress("wglGetSwapIntervalEXT");
}
