#include "player.h"

void player::initVariables()
{
	yVar = 0;
	texVar = 0;
	if (!playerTexSheet.loadFromFile("tex/player/WalkSprite.png")) {
		std::cout << "Could not load player sprite!";
	}
	playerModel.setTexture(playerTexSheet);
	playerModel.setTextureRect(sf::IntRect(20, 0, 210, 270));
	playerModel.setScale(.35, .35);
}

void player::initPlayer()
{
}

player::player(float x, float y)
{
	std::cout << "player";
	this->playerModel.setPosition(x, y);
	this->initVariables();
	this->initPlayer();
}

player::~player()
{
}
void player::render(sf::RenderTarget* target)
{
	target->draw(this->playerModel);
}
