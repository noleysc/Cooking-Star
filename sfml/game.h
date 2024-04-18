#pragma once
#include <SFML/Audio.hpp>
#include "player.h"
#include "cakeScene.h"
#include "menu.h"
/*game class*/
class game
{
private:
	//game logic

	//variables
	int a;
	int counter;
	int points;
	float pointClick;
	int rtrnSuccess;
	int tracker;
	sf::Vector2f cursorHold;
	//window
	menu newM;
	cake cake;
	player player;
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event e;

	//private functions
	void initTex();
	void initVars();
	void initGame();
	void initSpawnEntities();

	//mouse position
	sf::Vector2i mousePosWindow;

	//game objs
	//RectShapes
	sf::RectangleShape floor;
	sf::RectangleShape wall;
	sf::RectangleShape sun;
	sf::RectangleShape sky;
	sf::ConvexShape floorShad;
	sf::RectangleShape table;
	sf::RectangleShape tableShad;
	sf::RectangleShape wallWindowFrame;
	sf::RectangleShape door;
	sf::RectangleShape floorCont;
	sf::RectangleShape bookShelf;
	sf::RectangleShape bookShelfLine;
	sf::RectangleShape bookB;
	sf::RectangleShape bookG;
	sf::RectangleShape bookP;
	sf::RectangleShape bookLB;
	sf::RectangleShape bookBl;
	sf::RectangleShape bookShelf2;
	sf::RectangleShape bookShelfLine2;
	sf::RectangleShape bookB2;
	sf::RectangleShape bookG2;
	sf::RectangleShape bookP2;
	sf::RectangleShape bookLB2;
	sf::RectangleShape bookBl2;
	sf::RectangleShape bookShelfLine3;
	sf::RectangleShape bookShelfLine4;
	//Sprites
	sf::Sprite moon;
	sf::Sprite oven;
	sf::Sprite bowl;
	sf::Sprite bowl2;
	sf::Sprite bowl3;
	sf::Sprite bowl4;
	sf::Sprite whisk;
	sf::Sprite eFail;
	sf::Sprite eSuccess;
	sf::Sprite ePrompt;
	//Textures
	sf::Texture roomSpriteTex;
public:
	//public variables

	bool click = false;

	//mouse position holder
	sf::Vector2i mPWH;

	//constructors/deconstructors
	game();
	virtual ~game();

	//game accessors
	const bool windowIsOpen() const;

	//declared functions
	void resetCounter();
	void pollEEvent();
	void update();
	void updateMousePos();
	void updateInput();
	void roomRenderer();
	void splashRenderer();
	void menuRenderer();
	void completeMenu();
	void getClick();
	void rClick();
	void checkMousePos();
	void drawPlayer();
	void bowlGame();
};

