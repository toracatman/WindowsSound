#include <Windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

int WINAPI wWinMain(HINSTANCE hI, HINSTANCE hP, LPWSTR lpC, int nC)
{
	PlaySound(lpC, NULL, SND_ALIAS | SND_SYNC | SND_NODEFAULT);

	return 0;
}