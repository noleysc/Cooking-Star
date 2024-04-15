#pragma once
#include "player.h"
#include "menu.h"
/*game class*/
class game
{
private:
	//variables
	//window
	player player;
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event e;
	sf::Clock dtClock;
	float dt;
	//private functions
	void initVars();
	void initGame();
	void initSpawnEntities();
	//mouse position
	sf::Vector2i mousePosWindow;
	//game logic
	int points;
	float pointClick;
	int rtrnSuccess;
	int tracker;
	//game objs
	sf::RectangleShape station;
	sf::RectangleShape floor;
	sf::RectangleShape wall;
	sf::RectangleShape wallWindow;
	sf::RectangleShape sun;
	sf::RectangleShape sky;
	sf::ConvexShape floorShad;
	sf::RectangleShape table;
	sf::RectangleShape tableShad;
	sf::RectangleShape wallWindowFrame;
public:
	//constructors/deconstructors
	game();
	virtual ~game();
	//game accessors
	const bool windowIsOpen() const;
	//declare functions
	void pollEvent();
	void updateDt();
	void update();
	void updateMousPos();
	void updateInput();
	void renderRoom();
	void renderer();
};

