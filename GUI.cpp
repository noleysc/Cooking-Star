#include "GUI.h"
#include <iostream>
void GUI::drawShade(sf::RenderTarget* target)
{
	target->draw(this->shade);
	target->draw(this->star);
}
void GUI::clickStar() {
	switch (counterClick){
	case 1: {
		this->shade.setFillColor(sf::Color(255, 230, 222, 75));
		break;
	}
	case 2: {
		this->shade.setFillColor(sf::Color(255, 255, 222, 75));
		break;
	}
	case 3: {
			this->shade.setFillColor(sf::Color(230, 230, 222, 75));
			break;
	}
	case 4: {
			this->shade.setFillColor(sf::Color(230, 230, 255, 75));
			break;
	}
	case 5: {
		this->shade.setFillColor(sf::Color(230, 255, 255,75));
		break;
	}
	case 6:{
			this->shade.setFillColor(sf::Color(255, 230, 255,75));
			break;
		}
	case 7: {
		this->shade.setFillColor(sf::Color(255, 230, 222, 75));
		counterClick = 2;
		break;
	}
	}
}
GUI::GUI() {
	if (!starsTex.loadFromFile("tex/menu/StarSheet.png")) {
		std::cout << "cannot load star sheet png!";
	}
	star.setTexture(starsTex);
	star.setTextureRect(sf::IntRect(0, 0, 270, 260));
	shade.setSize(sf::Vector2f(1280, 960));
	shade.setPosition(sf::Vector2f(0, 0));
	shade.setFillColor(sf::Color(255, 230, 222, 75));
	star.setScale(.125, .125);
	starBounds.x = 33;
	starBounds.y = 33;
	counterClick = 0;
}

GUI::~GUI()
{
}
