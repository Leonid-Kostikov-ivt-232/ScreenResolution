#include <conio.h>
#include "screen_resolution_windows.h"

void screen_resolution(int Width, int Height, int BitsPerPel)
{
    DEVMODE dm;
    ZeroMemory(&dm, sizeof(dm));
    dm.dmSize = sizeof(dm);
    EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm);

    // �������� ���������� � ������� �����
    dm.dmPelsWidth = Width; // ������
    dm.dmPelsHeight = Height; // ������
    dm.dmBitsPerPel = BitsPerPel; // ������� �����

    // ��������� ����� ���������
    if (ChangeDisplaySettings(&dm, CDS_FULLSCREEN) != DISP_CHANGE_SUCCESSFUL) {
        // ��������� ������
    }
}
