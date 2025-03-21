#pragma once
#include <SFML/Graphics.hpp>
class GUI {
private:
	sf::Sprite star;
	sf::Texture starsTex;
	sf::RectangleShape shade;
public:
	//menu logic
	sf::Vector2f starBounds;
	int counterClick;
	//functions
	void drawShade(sf::RenderTarget* target);
	void clickStar();
	GUI();
	virtual ~GUI();
};