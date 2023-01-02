#include <Windows.h>
#include <cstdlib>
#include <cstdio>
#include <cstdint>

#pragma comment(lib, "imm32")

#define GET_CONVERSION_STATUS 0x0001
#define SET_CONVERSION_STATUS 0x0002

using namespace std;

int main(int argc, char** argv)
{
	HWND hIME = ImmGetDefaultIMEWnd(GetForegroundWindow());

	if (argc == 1) {
		LRESULT status = SendMessage(hIME, WM_IME_CONTROL, GET_CONVERSION_STATUS, 0);
		printf("%d\n", status);
	}
	else {
		LRESULT status = SendMessage(hIME, WM_IME_CONTROL, SET_CONVERSION_STATUS, atoi(argv[1]));
	}

	return 0;
}