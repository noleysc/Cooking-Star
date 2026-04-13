#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "GUI.h"
class menu
{
private:
	//sprites and textures
	sf::Texture splashTex;
	sf::Texture menuTex;
	sf::Texture contTitleTex;
	sf::Texture starsTex;
	sf::Sprite splashSprite;
	sf::Sprite title;
	sf::Sprite contTitle;
	sf::Sprite stars;
	sf::Text musicMarker;
	//menu counter
public:
	menu();
	virtual ~menu();
	//class functions
	void rendercontTitle(sf::RenderTarget* target);
	void renderSplash(sf::RenderTarget* target);
	void renderMenu(sf::RenderTarget* target);
	bool getMenuClick();
};