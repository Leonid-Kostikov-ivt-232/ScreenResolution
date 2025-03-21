#include <conio.h>
#include "screen_resolution_windows.h"

void screen_resolution(int Width, int Height, int BitsPerPel)
{
    DEVMODE dm;
    ZeroMemory(&dm, sizeof(dm));
    dm.dmSize = sizeof(dm);
    EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm);

    // Измените разрешение и глубину цвета
    dm.dmPelsWidth = Width; // Ширина
    dm.dmPelsHeight = Height; // Высота
    dm.dmBitsPerPel = BitsPerPel; // Глубина цвета

    // Примените новые настройки
    if (ChangeDisplaySettings(&dm, CDS_FULLSCREEN) != DISP_CHANGE_SUCCESSFUL) {
        // Обработка ошибки
    }
}
