#include <iostream>
#include <Windows.h>
#include <WinUser.h>

using namespace std;

void terminal() {

	cout << " MINECRAFT AUTO MINER" << endl;
	cout << "\n Z to stop\n X to start" << endl;
}

void clicker() {

	int click = 0;	//sets click to false
	while (true) {

		if (GetAsyncKeyState('X')) {	// X to enable
			click = 1;
		}

		else if (GetAsyncKeyState('Z')) {	// Z to disable
			click = 0;
		}

		if (click == 1) {	// auto clicker is on
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			Sleep(90);	// click speed. lower the number to increase speed
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}
	}
}

int main() {

	terminal();
	clicker();
	return 0;
}
