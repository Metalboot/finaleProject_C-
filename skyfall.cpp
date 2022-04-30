// Libraries and Header files
#include <iostream>
#include <string>
#include <Windows.h>
#include "functions.h"
#include "aDos.h"
#include "skyfall.h"

// Namespace Block
using namespace std;

// Function Block
void skyfall::progWin() {
	cout << "\n\nCongradulations, Agent " << player << ". Because of you, we were able to stop aDos from taking over the skyfall." << endl;
	Sleep(3000);
	cout << "We intercepted this message from his system a few weeks ago: " << objective << "." << endl;
	Sleep(3000);
	cout << "Without you, aDos would've been able to take over the skyfall and fulfill whatever devious plans he had generated." << endl;
	Sleep(3000);
	cout << "Thank you again, Agent " << player << "." << endl;
	Sleep(3000);
	cout << "\nConnection Terminated" << endl;
	Sleep(2000);
}