// working for numbers up to 11

#include <iostream>
#include <Windows.h>
#include <WinUser.h>

using namespace std;

int cps = 0;

void terminal() {
	cout << R"(         _    _ _______ ____        _____ _      _____ _____ _  ________ _____  
    /\  | |  | |__   __/ __ \      / ____| |    |_   _/ ____| |/ /  ____|  __ \ 
   /  \ | |  | |  | | | |  | |    | |    | |      | || |    | ' /| |__  | |__) |
  / /\ \| |  | |  | | | |  | |    | |    | |      | || |    |  < |  __| |  _  / 
 / ____ \ |__| |  | | | |__| |    | |____| |____ _| || |____| . \| |____| | \ \ 
/_/    \_\____/   |_|  \____/      \_____|______|_____\_____|_|\_\______|_|  \_\ v1.1)" << endl;
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

		if (click == 1) {	// auto clicker

			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(1000 / cps);
		}
	}
}

int main() {

	terminal();
	cout << "\n how many clicks per second do you want: ";
	cin >> cps;
	cout << 1000 / cps;
	clicker();
	return 0;
}
