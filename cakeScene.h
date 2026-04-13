#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
class cake {
private:
	//sprites
	sf::Sprite bowl1;
	sf::Sprite bowl2;
	sf::Sprite bowl3;
	sf::Sprite bowl4;
	sf::Sprite bowl5;
	sf::Sprite popUp1;
	sf::Sprite popUp2;
	sf::Sprite popUp3;
	sf::Sprite exc1;
	sf::Sprite exc2;
	sf::Sprite exc3;
	sf::Sprite background;
	sf::Sprite table;
	sf::Sprite cat;
	sf::Sprite catReact;
	sf::Sprite ovenGame;
	sf::Sprite ovenKnob;
	sf::Sprite bowlBack;
	sf::Sprite bowlFront;
	sf::Sprite whisk;
	sf::Sprite sliderBar;
	sf::Sprite slider;
	sf::Sprite ovenCake;
	//textures
	sf::Texture bowlTex;
	sf::Texture popUpTex;
	sf::Texture gameBack;
	sf::Texture tableTex;
	sf::Texture expression;
	sf::Texture reaction;
	sf::Texture ovenSheet;
	sf::Texture whiskSheet;
	//font
	sf::Font gameFont;
	//text
	sf::Text message;
	sf::Text message2;
	//function to texturize sprites
	void texSprites();
public:
	//constructor/destructor
	cake();
	virtual ~cake();
	//functions
	void drawPlayer(int a, sf::RenderTarget* target);
	void doBowlClick(sf::RenderTarget* target);
	void doInstructions(sf::RenderTarget* target);
	//void doOvenDial(sf::RenderTarget* target);
	//void doWiskMix(sf::RenderTarget* target);
};