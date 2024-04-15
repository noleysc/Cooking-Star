#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <vector>
#include <ctime>
class player
{
private:

	void initVariables();
	void initPlayer();
	float movementSpeed;
public:
	sf::RectangleShape playershape;
	sf::RectangleShape earL;
	sf::RectangleShape earR;
	sf::RectangleShape tail;
	player(float x=560.f, float y=800.f);
	virtual ~player();
	void updateInput();
	void update();
	void render(sf::RenderTarget* target);
};

