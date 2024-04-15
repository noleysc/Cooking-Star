#pragma once
#include <SFML/Graphics.hpp>
#include "game.h"
#include <iostream>
class menu
{
private:
	sf::Texture tex;
	int selectedItem;
public:
	menu(float width, float height);
	~menu();
	void draw();
	void MoveUp();
	void MoveDown();
	void display();

};

