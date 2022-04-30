#pragma once

class aDos {
public: // Public class for aDos
	void introduction();
	void progDesc1();
	void progDesc2();
	void progDesc3();

	void progAsk();
	void progAsk2();
	void progAsk3();

	void progAskCont1();
	void progAskCont2();

	void progAsk2Cont1();
	void progAsk2Cont2();

	void progAsk3Cont1();
	void progAsk3Cont2();

	void progAskFail();
	void progAskWrong();

	void progLost();

	string objective = "Objective: Take Over skyfall";

private: // Private class for aDos
	int key = 0;
};