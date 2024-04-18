#include "game.h"
int main()
{
	//counter variable
	int counter = 0;
	int opt = 1;
	//init game
	game cookGame;
	cookGame;
	//game loop
	while (cookGame.windowIsOpen()) {
		if (opt == 1) {
			cookGame.updateMousePos();
			cookGame.pollEEvent();
			cookGame.completeMenu();
			if (((cookGame.mPWH.y > 754.f) && (cookGame.mPWH.y < 860.f)) && ((cookGame.mPWH.x > 500) && (cookGame.mPWH.x < 782.f))) {
				cookGame.resetCounter();
				opt = 2;
			}
		}
		if (opt == 2) {
			cookGame.updateMousePos();
			cookGame.pollEEvent();
			cookGame.roomRenderer();
			if (((cookGame.mPWH.y < 220) && (cookGame.mPWH.y > 180)) && ((cookGame.mPWH.x > 350) && (cookGame.mPWH.x < 450))) {
				cookGame.resetCounter();
				opt = 3;
			}
		}
		if (opt == 3) {
			cookGame.updateMousePos();
			cookGame.pollEEvent();
			cookGame.bowlGame();
		}
	}
		return 0;
}