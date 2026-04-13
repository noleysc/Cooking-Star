#include "game.h"
#include "player.h"
//private function definitions
void game::initVars()
{
	this->window = nullptr;
	//Game logic
	this->points = 0;
	this->pointClick = 0;
	this->rtrnSuccess = 0;
	this->tracker = 0;
}
//texturizes sprites
void game::initTex()
{
	if (!roomSpriteTex.loadFromFile("tex/sprites/gameroomSprites/MiniSprites.png")) {
		std::cout << "Could not load room sprite textures!";
	}
	moon.setTexture(roomSpriteTex);
	oven.setTexture(roomSpriteTex);
	bowl.setTexture(roomSpriteTex);
	bowl2.setTexture(roomSpriteTex);
	bowl3.setTexture(roomSpriteTex);
	bowl4.setTexture(roomSpriteTex);
	whisk.setTexture(roomSpriteTex);
	eFail.setTexture(roomSpriteTex);
	eSuccess.setTexture(roomSpriteTex);
	ePrompt.setTexture(roomSpriteTex);
	moon.setTextureRect(sf::IntRect(0, 29, 40, 51));
	oven.setTextureRect(sf::IntRect(79, 0, 80, 90));
	bowl.setTextureRect(sf::IntRect(189, 40, 80, 40));
	bowl2.setTextureRect(sf::IntRect(189, 40, 80, 40));
	bowl3.setTextureRect(sf::IntRect(189, 40, 80, 40));
	bowl4.setTextureRect(sf::IntRect(189, 40, 80, 40));
	whisk.setTextureRect(sf::IntRect(289, 30, 50, 50));
	eFail.setTextureRect(sf::IntRect(540, 60, 20, 20));
	eSuccess.setTextureRect(sf::IntRect(539, 0, 70, 80));
	ePrompt.setTextureRect(sf::IntRect(380, 0, 20, 80));
	bowl.setScale(.25f, .25f);
	bowl2.setScale(.75f, .75f);
	bowl3.setScale(.4f, .4f);
	bowl4.setScale(.5f, .3f);
	whisk.setScale(.25f, .25f);
	ePrompt.setScale(.5f, .5f);
	eSuccess.setScale(.25f, .25f);
	moon.setScale(.35f, .35f);
	oven.setScale(1.15f, 1.15f);

}

//starts the window
void game::initGame()
{
	this->videoMode.height = 960;
	this->videoMode.width = 1280;
	this->window = new sf::RenderWindow(this->videoMode, "Cooking Star!");
	this->window->setFramerateLimit(12);
}
//initialize entities inside spawn room
void game::initSpawnEntities(){
	this->wallWindowFrame.setSize(sf::Vector2f(260.f, 85.f));
	this->door.setSize(sf::Vector2f(10.f, 90.f));
	this->floor.setSize(sf::Vector2f(1120.f, 740.f));
	this->floorCont.setSize(sf::Vector2f(40, 90));
	this->wall.setSize(sf::Vector2f(1120.f, 200.f));
	this->sky.setSize(sf::Vector2f(250, 75.f));
	this->table.setSize(sf::Vector2f(576.f, 60.f));
	this->bookShelf.setSize(sf::Vector2f(115, 200));
	this->bookShelf2.setSize(sf::Vector2f(115, 200));
	this->bookShelfLine.setSize(sf::Vector2f(85, 5));
	this->bookShelfLine2.setSize(sf::Vector2f(85, 5));
	this->bookShelfLine3.setSize(sf::Vector2f(85, 5));
	this->bookShelfLine4.setSize(sf::Vector2f(85, 5));
	this->bookB.setSize(sf::Vector2f(15, 60));
	this->bookG.setSize(sf::Vector2f(15, 45));
	this->bookP.setSize(sf::Vector2f(15, 55));
	this->bookLB.setSize(sf::Vector2f(15, 63));
	this->bookBl.setSize(sf::Vector2f(15, 50));
	this->bookB2.setSize(sf::Vector2f(15, 60));
	this->bookG2.setSize(sf::Vector2f(15, 45));
	this->bookP2.setSize(sf::Vector2f(15, 55));
	this->bookLB2.setSize(sf::Vector2f(15, 63));
	this->bookBl2.setSize(sf::Vector2f(15, 50));
	this->floorShad.setPointCount(6);
	this->floorShad.setPoint(0,sf::Vector2f(515.f, 290.f));
	this->floorShad.setPoint(1, sf::Vector2f(80.f, 572.f));
	this->floorShad.setPoint(2, sf::Vector2f(80.f, 940.f));
	this->floorShad.setPoint(3, sf::Vector2f(1200.f, 940.f));
	this->floorShad.setPoint(4, sf::Vector2f(1200.f, 572.f));
	this->floorShad.setPoint(5, sf::Vector2f(765.f, 290.f));
	this->floor.setFillColor(sf::Color(115, 117, 133, 255));
	this->floorCont.setFillColor(sf::Color(115, 117, 133, 255));
	this->door.setFillColor(sf::Color(115, 96, 85, 255));
	this->wall.setFillColor(sf::Color(171, 175, 207, 255));
	this->sky.setFillColor(sf::Color(90, 107, 130, 255));
	this->wallWindowFrame.setFillColor(sf::Color(115, 96, 85, 255));
	this->table.setFillColor(sf::Color(115, 96, 85, 255));
	this->floorShad.setFillColor(sf::Color(199, 222, 255, 95));
	this->tableShad.setFillColor(sf::Color(201, 186, 209, 125));
	this->bookShelf.setFillColor(sf::Color(115, 96, 85, 255));
	this->bookShelf2.setFillColor(sf::Color(115, 96, 85, 255));
	this->bookShelfLine.setFillColor(sf::Color(145, 136, 125, 255));
	this->bookShelfLine2.setFillColor(sf::Color(145, 136, 125, 255));
	this->bookShelfLine3.setFillColor(sf::Color(145, 136, 125, 255));
	this->bookShelfLine4.setFillColor(sf::Color(145, 136, 125, 255));
	this->bookBl.setFillColor(sf::Color(62, 63, 64, 255));
	this->bookG.setFillColor(sf::Color(155, 179, 158, 255));
	this->bookP.setFillColor(sf::Color(186, 169, 212, 255));
	this->bookLB.setFillColor(sf::Color(186, 207, 204, 255));
	this->bookB.setFillColor(sf::Color(153, 174, 204, 255));
	this->bookBl2.setFillColor(sf::Color(24, 27, 28, 255));
	this->bookG2.setFillColor(sf::Color(155, 179, 158, 255));
	this->bookP2.setFillColor(sf::Color(173, 149, 186, 255));
	this->bookLB2.setFillColor(sf::Color(191, 218, 224, 255));
	this->bookB2.setFillColor(sf::Color(100, 117, 140, 255));
	this->floor.setPosition(sf::Vector2f(80, 200));
	this->wall.setPosition(sf::Vector2f(80, 20));
	this->wallWindowFrame.setPosition(sf::Vector2f(510, 65));
	this->moon.setPosition(sf::Vector2f(535, 85));
	this->oven.setPosition(sf::Vector2f(950, 180));
	this->sky.setPosition(sf::Vector2f(515, 70));
	this->table.setPosition(sf::Vector2f(340, 220));
	this->tableShad.setPosition(sf::Vector2f(340, 280));
	this->door.setPosition(sf::Vector2f(30, 450));
	this->floorCont.setPosition(sf::Vector2f(40, 450));
	this->bookShelf.setPosition(sf::Vector2f(85, 80));
	this->bookShelf2.setPosition(sf::Vector2f(212.5, 80));
	this->bookShelfLine.setPosition(sf::Vector2f(100, 180));
	this->bookShelfLine2.setPosition(sf::Vector2f(212.5, 180));
	this->bookShelfLine3.setPosition(sf::Vector2f(115, 275));
	this->bookShelfLine4.setPosition(sf::Vector2f(227.5, 275));
	this->bookB.setPosition(sf::Vector2f(101, 120));
	this->bookG.setPosition(sf::Vector2f(117, 135));
	this->bookBl.setPosition(sf::Vector2f(133, 130));
	this->bookLB.setPosition(sf::Vector2f(149, 117));
	this->bookP.setPosition(sf::Vector2f(165, 125));
	this->bookB2.setPosition(sf::Vector2f(244.5, 120));
	this->bookG2.setPosition(sf::Vector2f(228.5, 135));
	this->bookBl2.setPosition(sf::Vector2f(292.5, 130));
	this->bookLB2.setPosition(sf::Vector2f(260.5, 117));
	this->bookP2.setPosition(sf::Vector2f(276.5, 125));
	this->bowl2.setPosition(sf::Vector2f(350, 200));
	this->bowl.setPosition(sf::Vector2f(400, 220));
	this->bowl3.setPosition(sf::Vector2f(425, 215));
	this->bowl4.setPosition(sf::Vector2f(375, 225));
	this->ePrompt.setPosition(sf::Vector2f(395, 145));
}
//constructor/destructor
game::game()
{
	std::cout << "game";
	this->initTex();
	this->initSpawnEntities();
	this->initVars();
	this->initGame();
}
game::~game()
{
	delete this->window;
}
void game::changeShade()
{
	if (this->mPWH.x < 33 && this->mPWH.y>33) {
		std::cout << "meow";
		this->gui.counterClick = gui.counterClick + 1;
		this->gui.clickStar();
	}
}
//function definitions
void game::resetCounter() {
	counter = 0;
}
void game::updateMousePos()
{
	//update mouse positions and store them in a vect2i variable *mouse pos relative to window size
	this->mousePosWindow = sf::Mouse::getPosition(*this->window);
}
//player movement update function
void game::updateInput()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		this->player.playerModel.move(-12.f, 0.f); 
		player.texVar = (int)player.playerModel.getPosition().x / 24 % 3;
		player.texVar *= 325;
		player.yVar = 659;
		std::cout << player.texVar << std::endl;
		player.playerModel.setTextureRect(sf::IntRect(player.texVar, player.yVar-10, 210, 280));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		this->player.playerModel.move(12.f, 0.f);
		player.texVar = (int)player.playerModel.getPosition().x / 24 % 3;
		player.texVar *= 325;
		std::cout << player.texVar << std::endl;
		player.yVar = 989;
		player.playerModel.setTextureRect(sf::IntRect(player.texVar, player.yVar-10, 210, 280));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		this->player.playerModel.move(0.f, -12.f);
		player.texVar = (int)player.playerModel.getPosition().y / 24 % 3;
		player.texVar *= 325;
		player.yVar = 10;
		player.playerModel.setTextureRect(sf::IntRect(player.texVar+20, player.yVar-10, 210, 280));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		player.texVar = (int)player.playerModel.getPosition().y / 24 % 3;
		player.texVar *= 325;
		this->player.playerModel.move(0.f, 12.f);
		player.yVar = 339;
		player.playerModel.setTextureRect(sf::IntRect(player.texVar+20, player.yVar-10, 210, 280));
	}
	//left collision
	if (player.playerModel.getPosition().x < 80.f) {
		player.playerModel.setPosition(80.f, player.playerModel.getPosition().y);
	}
	//top collision
	if (player.playerModel.getPosition().y < 200){
		player.playerModel.setPosition(player.playerModel.getPosition().x, 200.f);
	}
	//right collision
	if (player.playerModel.getPosition().x > 1129.f) {
		player.playerModel.setPosition(1129, player.playerModel.getPosition().y);
	}
	//bottom collision
	if (player.playerModel.getPosition().y > 845) {
		player.playerModel.setPosition(player.playerModel.getPosition().x, 845);
	}
}
void game::pollEEvent() {
	while (this->window->pollEvent(this->e)) {
		switch (this->e.type) {
		case sf::Event::Closed:
			this->window->close();
		case sf::Event::KeyPressed:
			if (this->e.key.code == sf::Keyboard::Escape)
				this->window->close();
		case sf::Event::MouseButtonPressed:
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
				this->mPWH = sf::Mouse::getPosition(*this->window);
				std::cout << mPWH.x;
				std::cout << mPWH.y;
			}
		}
		}
	}

void game::update()
{	
	//this->pollRoomEvent();
	this->pollEEvent();
	this->updateInput();
	this->updateMousePos();
	}
//renders game obj
void game::splashRenderer() {
	this->window->clear();
	this->newM.renderSplash(this->window);
	this->window->display();
}
void game::menuRenderer() {
	this->window->clear();
	this->pollEEvent();
	this->newM.renderMenu(this->window);
	this->gui.drawShade(this->window);
	this->window->display();
}
void game::completeMenu() {
	//load splash before menu
	while (counter < 60) {
		this->splashRenderer();
		++counter;
	}
	if (this->mPWH.x < 33 && this->mPWH.y>33) {
		std::cout << "meow";
	}
	this->changeShade();
	this->menuRenderer();
}
void game::drawPlayer() {
	this->player.render(this->window);
}
//renders initial game room
void game::roomRenderer() {
	this->window->clear();
	this->window->draw(floor);
	this->window->draw(wall);
	this->window->draw(oven);
	this->window->draw(wallWindowFrame);
	this->window->draw(tableShad);
	this->window->draw(table);
	this->window->draw(sky);
	this->window->draw(moon);
	this->window->draw(floorShad);
	this->window->draw(floorCont);
	this->window->draw(door);
	this->window->draw(bookShelf);
	this->window->draw(bookShelf2);
	this->window->draw(bookShelfLine);
	this->window->draw(bookShelfLine2);
	this->window->draw(bookShelfLine3);
	this->window->draw(bookShelfLine4);
	this->window->draw(bookB);
	this->window->draw(bookBl);
	this->window->draw(bookLB);
	this->window->draw(bookP);
	this->window->draw(bookG);
	this->window->draw(bookB2);
	this->window->draw(bookBl2);
	this->window->draw(bookLB2);
	this->window->draw(bookP2);
	this->window->draw(bookG2);
	this->window->draw(bowl2);
	this->window->draw(bowl3);
	this->window->draw(bowl);
	this->window->draw(bowl4);
	this->window->draw(ePrompt);
	this->updateInput();
	this->drawPlayer();
	this->window->display();
}
//renders bowl game room
void game::bowlGame() {
	this->window->clear();
	while (counter == 0) {
		this->window->clear();
		this->cake.doInstructions(window);
		this->pollEEvent(); 
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
			this->window->clear();
			counter = 1;  
		}
		this->window->display();
		}
	this->cake.doBowlClick(this->window);
	this->cake.drawPlayer(2, this->window);
	this->pollEEvent();
	this->window->display();
}
//return whether the window is open or not
const bool game::windowIsOpen() const {
	return this->window->isOpen();
}