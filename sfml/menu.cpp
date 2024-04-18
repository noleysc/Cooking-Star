#include "menu.h"
//functions
//renders the splash sprite
void menu::renderSplash(sf::RenderTarget* target)
{
	target->draw(this->splashSprite);
}
//renders the menu sprite
void menu::renderMenu(sf::RenderTarget* target) 
{
	target->draw(this->title);
}
void menu::setClick() {
	menuClick = true;
}
bool menu::getMenuClick()
{
	return menuClick;
}

// constructor+destructor
// loads textures
menu::menu()
{
	std::cout << "menu";
	if(!menuTex.loadFromFile("tex/menu/titleScreen.png")) {
		std::cout << "Could not load menu screen texture";
	};

	if (!splashTex.loadFromFile("tex/menu/splashState.png")) {
		std::cout << "Cannot load splash texture!";
	}

	this->splashSprite.setTexture(splashTex);
	this->splashSprite.scale(sf::Vector2f(1, 1));
	this->title.setTexture(menuTex);
	this->title.scale(sf::Vector2f(1, 1));

}

menu:: ~menu()
{
}
