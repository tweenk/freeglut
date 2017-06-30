#ifndef  __FREEGLUT_UCALL_H__
#define  __FREEGLUT_UCALL_H__

/*
 * freeglut_ucall.h
 *
 * Callbacks with user data arguments.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * PAWEL W. OLSZTA BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifdef __cplusplus
    extern "C" {
#endif

/*
 * Menu stuff, see fg_menu.c
 */
FGAPI int  FGAPIENTRY glutCreateMenuUcall( void (* callback)( int menu, void* user_data ), void* user_data );

/*
 * Global callback functions, see fg_callbacks.c
 */
FGAPI void FGAPIENTRY glutTimerFuncUcall( unsigned int time, void (* callback)( int, void* ), int value, void* user_data );
FGAPI void FGAPIENTRY glutIdleFuncUcall( void (* callback)( void* ), void* user_data );

/*
 * Window-specific callback functions, see fg_callbacks.c
 */
FGAPI void FGAPIENTRY glutKeyboardFuncUcall( void (* callback)( unsigned char, int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutSpecialFuncUcall( void (* callback)( int, int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutReshapeFuncUcall( void (* callback)( int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutVisibilityFuncUcall( void (* callback)( int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutDisplayFuncUcall( void (* callback)( void* ), void* user_data );
FGAPI void FGAPIENTRY glutMouseFuncUcall( void (* callback)( int, int, int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutMotionFuncUcall( void (* callback)( int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutPassiveMotionFuncUcall( void (* callback)( int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutEntryFuncUcall( void (* callback)( int, void* ), void* user_data );

FGAPI void FGAPIENTRY glutKeyboardUpFuncUcall( void (* callback)( unsigned char, int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutSpecialUpFuncUcall( void (* callback)( int, int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutJoystickFuncUcall( void (* callback)( unsigned int, int, int, int, void* ), int pollInterval, void* user_data );
FGAPI void FGAPIENTRY glutMenuStateFuncUcall( void (* callback)( int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutMenuStatusFuncUcall( void (* callback)( int, int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutOverlayDisplayFuncUcall( void (* callback)( void* ), void* user_data );
FGAPI void FGAPIENTRY glutWindowStatusFuncUcall( void (* callback)( int, void* ), void* user_data );

FGAPI void FGAPIENTRY glutSpaceballMotionFuncUcall( void (* callback)( int, int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutSpaceballRotateFuncUcall( void (* callback)( int, int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutSpaceballButtonFuncUcall( void (* callback)( int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutButtonBoxFuncUcall( void (* callback)( int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutDialsFuncUcall( void (* callback)( int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutTabletMotionFuncUcall( void (* callback)( int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutTabletButtonFuncUcall( void (* callback)( int, int, int, int, void* ), void* user_data );

FGAPI void FGAPIENTRY glutMouseWheelFuncUcall( void (* callback)( int, int, int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutPositionFuncUcall( void (* callback)( int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutCloseFuncUcall( void (* callback)( void* ), void* user_data );
FGAPI void FGAPIENTRY glutWMCloseFuncUcall( void (* callback)( void* ), void* user_data );
FGAPI void FGAPIENTRY glutMenuDestroyFuncUcall( void (* callback)( void* ), void* user_data );

/*
 * Multi-touch/multi-pointer extensions
 */
FGAPI void FGAPIENTRY glutMultiEntryFuncUcall( void (* callback)( int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutMultiButtonFuncUcall( void (* callback)( int, int, int, int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutMultiMotionFuncUcall( void (* callback)( int, int, int, void* ), void* user_data );
FGAPI void FGAPIENTRY glutMultiPassiveFuncUcall( void (* callback)( int, int, int, void* ), void* user_data );

/*
 * Initialization functions, see fg_init.c
 */
#include <stdarg.h>
FGAPI void FGAPIENTRY glutInitErrorFuncUcall( void (* callback)( const char *fmt, va_list ap, void* ), void* user_data );
FGAPI void FGAPIENTRY glutInitWarningFuncUcall( void (* callback)( const char *fmt, va_list ap, void* ), void* user_data );

/* Mobile platforms lifecycle */
FGAPI void FGAPIENTRY glutInitContextFuncUcall(void (* callback)(void*), void* user_data);
FGAPI void FGAPIENTRY glutAppStatusFuncUcall(void (* callback)(int, void*), void* user_data);

#ifdef __cplusplus
    }
#endif

/*** END OF FILE ***/

#endif /* __FREEGLUT_UCALL_H__ */
