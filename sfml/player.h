#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <vector>
#include <ctime>
#include <iostream>
class player
{
private:
public:
	//sprite
	sf::Sprite playerModel;
	sf::Texture playerTexSheet;
	//variables used to animate the sprite
	int texVar;
	int yVar;
	//functions
	//used to initialize player and variables
	void initVariables();
	void initPlayer();
	player(float x=80.f, float y=480.f);
	virtual ~player();
	void render(sf::RenderTarget* target);
};

