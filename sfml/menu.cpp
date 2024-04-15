#include "menu.h"

menu::menu(float width, float height)
{
	if(!tex.loadFromFile("tex/menu1.png")) {
		std::cout << "Could not load menu screen texture";
	};
	sf::Sprite title;
	title.setTexture(tex);
}

menu::~menu()
{
}

void menu::draw()
{
}

void menu::MoveUp()
{
}

void menu::MoveDown()
{
}

void menu::display()
{
}
