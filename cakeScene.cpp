#include "cakeScene.h"
//functions
void cake::texSprites() {
	if (!gameFont.loadFromFile("font/Minecraft.ttf")) {
		std::cout << "Could not load font!";
	}
	if (!bowlTex.loadFromFile("tex/sprites/minigameSprites/bowlSprites/IngredientBowls.png")) {
		std::cout << "Could not load player sprite!";
	}
	if (!popUpTex.loadFromFile("tex/sprites/minigameSprites/bowlSprites/Popup.png")) {
		std::cout << "Could not load pop-up sprite!";
	}
	if (!gameBack.loadFromFile("tex/sprites/minigameSprites/MinigameBackground.png")) {
		std::cout << "Could not load pop-up sprite!";
	}
	if (!tableTex.loadFromFile("tex/sprites/minigameSprites/PlayTable.png")) {
		std::cout << "Could not load table sprite";
	}
	if (!expression.loadFromFile("tex/sprites/minigameSprites/CatExpressions.png")) {
		std::cout<<"Could not load cat expressions sprite!";
	}
	if (!reaction.loadFromFile("tex/sprites/minigameSprites/ExpressionBubbles.png")) {
		std::cout<<"Could not load cat expression bubble sprite!";
	}
	if (!ovenSheet.loadFromFile("tex/sprites/minigameSprites/ovenSprites/ovenSheet.png")) {
		std::cout << "Could not load oven sprites";
	}
	if (!whiskSheet.loadFromFile("tex/sprites/minigameSprites/whiskSprites/whiskSheet.png")) {
		std::cout << "Could not load whisk sprites";
	}
	message.setFont(gameFont);
	message2.setFont(gameFont);
	message.setString("click the boxes in the correct order.");
	message2.setString("(click to continue!)");
	message.setPosition(sf::Vector2f(450, 145));
	message2.setPosition(sf::Vector2f(450, 355));
	message.setCharacterSize(22);
	message2.setCharacterSize(25);
	message.setFillColor(sf::Color::Black);
	message2.setFillColor(sf::Color::Black);
	cat.setTexture(expression);
	catReact.setTexture(reaction);
	ovenGame.setTexture(ovenSheet);
	ovenKnob.setTexture(ovenSheet);
	ovenCake.setTexture(ovenSheet);
	bowlFront.setTexture(whiskSheet);
	bowlBack.setTexture(whiskSheet);
	slider.setTexture(whiskSheet);
	sliderBar.setTexture(whiskSheet);
	whisk.setTexture(whiskSheet);
	bowl1.setTexture(bowlTex);
	bowl2.setTexture(bowlTex);
	bowl3.setTexture(bowlTex);
	bowl4.setTexture(bowlTex);
	bowl5.setTexture(bowlTex);
	popUp1.setTexture(popUpTex);
	popUp2.setTexture(popUpTex);
	popUp3.setTexture(popUpTex);
	background.setTexture(gameBack);
	table.setTexture(tableTex);
	catReact.setTextureRect(sf::IntRect(575, 0, 600, 330));
	bowl1.setTextureRect(sf::IntRect(0, 0, 341, 500));
	bowl2.setTextureRect(sf::IntRect(540, 0, 341, 500));
	bowl3.setTextureRect(sf::IntRect(1089, 0, 341, 500));
	bowl4.setTextureRect(sf::IntRect(1639, 0, 341, 500));
	bowl5.setTextureRect(sf::IntRect(2199, 0, 341, 500));
	popUp1.setTextureRect(sf::IntRect(0, 0, 840, 840));
	popUp2.setTextureRect(sf::IntRect(0, 0, 840, 840));
	popUp3.setTextureRect(sf::IntRect(0, 0, 840, 840));
	catReact.setScale(.5f, .5f);
	bowl1.setScale(.8f, .8f);
	bowl2.setScale(.5f, .5f);
	bowl3.setScale(.5f, .5f);
	bowl4.setScale(.5f, .5f);
	bowl5.setScale(.5f, .5f);
	popUp1.setScale(.5f, .5f);
	popUp2.setScale(.5f, .5f);
	popUp3.setScale(.5f, .5f);
	background.setScale(.5f, .5f);
	table.setScale(.5f, .5f);
	cat.setScale(.5f, .5f);
}
//functions
void cake::drawPlayer(int a, sf::RenderTarget* target)
{
	if (a == 0) {
		this->cat.setTextureRect(sf::IntRect(0, 0, 620, 760));
		target->draw(this->cat);
	}
	else {
		if (a == 1) {
			this->cat.setTextureRect(sf::IntRect(1380, 0, 620, 760));
			target->draw(this->cat);
		}
		else {
			if (a == 2) {
				this->cat.setTextureRect(sf::IntRect(665, 0, 685, 760));
				this->catReact.setTextureRect(sf::IntRect(570, 0, 590, 330));
				target->draw(this->cat);
				target->draw(this->catReact);
			}
		}
	}
}
void cake::doInstructions(sf::RenderTarget* target)
{
	popUp1.setPosition(sf::Vector2f(430, 40));
	target->draw(this->popUp1);
	target->draw(this->message);
	target->draw(this->message2);
}
void cake::doBowlClick(sf::RenderTarget* target) {
	table.setPosition(sf::Vector2f(0, 525));
	//bowl1.setPosition(sf::Vector2f(503.6,300));
	//bowl2.setPosition(sf::Vector2f(840, 300));
	//bowl3.setPosition(sf::Vector2f(303.6, 300));
	//bowl4.setPosition(sf::Vector2f(690, 600));
	//bowl5.setPosition(sf::Vector2f(453.6, 600));
	cat.setPosition(sf::Vector2f(330, 145));
	catReact.setPosition(sf::Vector2f(673, 150));
	target->draw(this->background);
	target->draw(this->table);
}
cake::cake() {
	texSprites();
}
cake::~cake() {}