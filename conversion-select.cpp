#include <Windows.h>
#include <cstdlib>
#include <cstdio>
#include <cstdint>

#pragma comment(lib, "imm32")

using namespace std;

int main(int argc, char** argv)
{
	HWND hIME = ImmGetDefaultIMEWnd(GetForegroundWindow());

	if (argc == 1) {
		LRESULT status = SendMessage(hIME, WM_IME_CONTROL, 0x0001, 0);
		printf("%d\n", status);
	}
	else {
		int conversion_status = atoi(argv[1]);
		LRESULT status = SendMessage(hIME, WM_IME_CONTROL, 0x0002, conversion_status);
	}

	// read
	//LRESULT status = SendMessage(hIME, WM_IME_CONTROL, 0x0001, 0);
	//cout << (status ? "Korean" : "English") << endl;
	//cout << status << endl;

	// change to english
	//LRESULT status = SendMessage(hIME, WM_IME_CONTROL, 0x0002, 0);
	//cout << (status ? "Korean" : "English") << endl;

	// change to korean
	//LRESULT status = SendMessage(hIME, WM_IME_CONTROL, 0x0002, 1);
	//cout << (status ? "Korean" : "English") << endl;

	return 0;
}