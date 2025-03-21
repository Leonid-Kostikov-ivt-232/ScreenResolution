#ifndef _SCREEN_RESOLUTION_WINDOWS_H
#define _SCREEN_RESOLUTION_WINDOWS_H

#include <windows.h>

#define EXPORT extern "C" __declspec(dllexport)

// «десь определ€ютс€ прототипы экспортируемых функций
EXPORT void screen_resolution(int Width, int Height, int BitsPerPel);

#endif // _SCREEN_RESOLUTION_WINDOWS_H
