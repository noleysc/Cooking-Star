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
	if (!contTitleTex.loadFromFile("tex/menu/menu1.png")) {
		std::cout << "cannot load selection menu texture";
	}
	if (!starsTex.loadFromFile("tex/menu/StarSheet.png")) {
		std::cout << "cannot load star sheet png!";
	}
	this->contTitle.setTexture(contTitleTex);
	this->stars.setTexture(starsTex);
	this->stars.setScale(0.5, 0.5);
	this->splashSprite.setTexture(splashTex);
	this->splashSprite.scale(sf::Vector2f(1, 1));
	this->title.setTexture(menuTex);
	this->title.scale(sf::Vector2f(1, 1));
}

menu:: ~menu()
{
}
