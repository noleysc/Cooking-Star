#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <chrono>
#include <ctime>
class menu
{
private:
	//sprites and textures
	sf::Texture splashTex;
	sf::Texture menuTex;
	sf::Sprite splashSprite;
	sf::Sprite title;
	//menu logic
	bool menuClick = false;
public:
	menu();
	virtual ~menu();
	//class functions
	void renderSplash(sf::RenderTarget* target);
	void renderMenu(sf::RenderTarget* target);
	void setClick();
	bool getMenuClick();
};