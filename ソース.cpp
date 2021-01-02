#include <Windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

int WINAPI WinMain(HINSTANCE hI, HINSTANCE hP, LPSTR lpC, int nC)
{
	PlaySound(lpC, NULL, SND_ALIAS | SND_SYNC | SND_NODEFAULT);

	return 0;
}