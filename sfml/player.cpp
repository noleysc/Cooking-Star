#include "player.h"
#include <iostream>

void player::initVariables()
{
	this->movementSpeed = 12.f;
}

void player::initPlayer()
{
	sf::Texture splashTex;
	if (!splashTex.loadFromFile("tex/splashState.png")) {
		std::cout << "Cannot load splash texture!";
	}
	sf::Sprite splashSprite;
	splashSprite.setTexture(splashTex);
}

player::player(float x, float y)
{
	this->playershape.setPosition(x, y);
	this->earL.setPosition(x, y - 15.f);
	this->earR.setPosition(x + 20.f, y-15.f);
	this->tail.setPosition(x + 12.5, y + 50.f);
	this->initVariables();
	this->initPlayer();
}

player::~player()
{
}

void player::updateInput()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		this->playershape.move(-this->movementSpeed, 0.f);
		this->earL.move(-this->movementSpeed, 0.f);
		this->earR.move(-this->movementSpeed, 0.f);
		this->tail.move(-this->movementSpeed, 0.f);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		this->playershape.move(this->movementSpeed, 0.f);
		this->earL.move(this->movementSpeed, 0.f);
		this->earR.move(this->movementSpeed, 0.f);
		this->tail.move(this->movementSpeed, 0.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		this->playershape.move(0.f, -this->movementSpeed);
		this->earL.move(0.f, -this->movementSpeed);
		this->earR.move(0.f, -this->movementSpeed);
		this->tail.move(0.f, -this->movementSpeed);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		this->playershape.move(0.f, this->movementSpeed);
		this->earL.move(0.f, this->movementSpeed);
		this->earR.move(0.f, this->movementSpeed);
		this->tail.move(0.f, this->movementSpeed);
	}
	//left collision
	if (playershape.getPosition().x < 0.f) {
		playershape.setPosition(0.f, playershape.getPosition().y);
		earL.setPosition(0.f, earL.getPosition().y);
		earR.setPosition(0.f, earR.getPosition().y);
		tail.setPosition(0.f, tail.getPosition().y);
	}
	//top collision
	if (playershape.getPosition().y < 0) {
		playershape.setPosition(playershape.getPosition().x, 0.f);
		earL.setPosition(earL.getPosition().x, 0.f);
		earR.setPosition(earR.getPosition().x, 0.f);
		tail.setPosition(tail.getPosition().x, 0.f);
	}
	//right collision
	if (playershape.getPosition().x > 1275.f) {
		playershape.setPosition(1275, playershape.getPosition().y);
		earL.setPosition(1275, playershape.getPosition().y-15.f);
		earR.setPosition(1275+20.f, playershape.getPosition().y-15.f);
		tail.setPosition(1275+12.5, playershape.getPosition().y-50.f);
	}
	//bottom collision
	if (playershape.getPosition().y > 1119) {
		playershape.setPosition(playershape.getPosition().x, 1119);
		earL.setPosition(earL.getPosition().x, 1119);
		earR.setPosition(earR.getPosition().x, 1119);
		tail.setPosition(tail.getPosition().x, 1119);
	}
}

void player::update()
{
	this->updateInput();
}

void player::render(sf::RenderTarget* target)
{
	target->draw(this->)
}
