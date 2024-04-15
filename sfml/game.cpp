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
void game::initGame()
{
	this->videoMode.height = 960;
	this->videoMode.width = 1280;
	this->window = new sf::RenderWindow(this->videoMode, "Cooking Star!");
	this->window->setFramerateLimit(12);
}
//initialize entities inside spawn room
void game::initSpawnEntities(){
	this->station.setSize(sf::Vector2f(10.f, 10.f));
	this->wallWindowFrame.setSize(sf::Vector2f(60.f, 60.f));
	this->floor.setSize(sf::Vector2f(1120.f, 1152.f));
	this->wall.setSize(sf::Vector2f(1120.f, 200.f));
	this->wallWindow.setSize(sf::Vector2f(50.f, 50.f));
	this->sun.setSize(sf::Vector2f(20.f, 20.f));
	this->sky.setSize(sf::Vector2f(50.f, 50.f));
	this->table.setSize(sf::Vector2f(576.f, 30.f));
	this->floorShad.setPointCount(6);
	this->floorShad.setPoint(0,sf::Vector2f(614.f, 260.f));
	this->floorShad.setPoint(1, sf::Vector2f(80.f, 542.f));
	this->floorShad.setPoint(2, sf::Vector2f(80.f, 960.f));
	this->floorShad.setPoint(3, sf::Vector2f(1200.f, 960.f));
	this->floorShad.setPoint(4, sf::Vector2f(1200.f, 542.f));
	this->floorShad.setPoint(5, sf::Vector2f(664.f, 260.f));
	this->station.setFillColor(sf::Color(255, 247, 232, 255));
	this->floor.setFillColor(sf::Color(237, 226, 206,255));
	this->wall.setFillColor(sf::Color(230, 220, 215, 255));
	this->wallWindow.setFillColor(sf::Color(255, 251, 237, 75));
	this->sun.setFillColor(sf::Color(255, 227, 135, 255));
	this->sky.setFillColor(sf::Color(202, 242, 250, 255));
	this->wallWindowFrame.setFillColor(sf::Color(179, 171, 157, 255));
	this->table.setFillColor(sf::Color(69, 56, 71, 255));
	this->floorShad.setFillColor(sf::Color(252, 243, 225, 135));
	this->tableShad.setFillColor(sf::Color(201, 186, 209, 125));
	this->station.setPosition(sf::Vector2f(635.f, 215.f));
	this->floor.setPosition(sf::Vector2f(80, 200));
	this->wall.setPosition(sf::Vector2f(80, 20));
	this->wallWindowFrame.setPosition(sf::Vector2f(609, 35));
	this->wallWindow.setPosition(sf::Vector2f(614, 40));
	this->sun.setPosition(sf::Vector2f(630, 40));
	this->sky.setPosition(sf::Vector2f(614, 40));
	this->table.setPosition(sf::Vector2f(340, 220));
	this->tableShad.setPosition(sf::Vector2f(340, 250));
}
game::game()
{
	this->initVars();
	this->initGame();
}
game::~game()
{
	delete this->window;
}
//function definitions
void game::updateDt() {
	system("cls");
	this->dt = this->dtClock.getElapsedTime().asSeconds();
	std::cout << this->dt << "\n";
}
void game::updateMousPos()
{
	//update mouse positions and store them in a vect2i variable *mouse pos relative to window size
	this->mousePosWindow = sf::Mouse::getPosition(*this->window);
}
void game::pollEvent()
{
	while (this->window->pollEvent(this->e)) {
		switch (this->e.type) {
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->e.key.code == sf::Keyboard::Escape)
				this->window->close();
			break;
		}
	}
}
void game::updateInput() {

}
void game::update()
{	
	this->pollEvent();
	this->updateInput();
	this->updateMousPos();
	this->player.update();
	this->updateDt();
}
//renders game objs

void game::renderRoom() {
	this->window->draw(floor);
	this->window->draw(wall);
	this->window->draw(wallWindowFrame);
	this->window->draw(tableShad);
	this->window->draw(table);
	this->window->draw(sky);
	this->window->draw(sun);
	this->window->draw(wallWindow);
	this->window->draw(floorShad);
	this->window->draw(station);
}
void game::renderer()
{   //font
	sf::Font comic_sans;
	comic_sans.loadFromFile("C:\\comicsansms.ttf");
	sf::Text hi;
	hi.setFont(comic_sans);
	hi.setString("Meowww :3");
	hi.setCharacterSize(128);
	hi.setFillColor(sf::Color::Magenta);
	hi.setOutlineColor(sf::Color::Yellow);
	hi.setOutlineThickness(2);
	hi.setPosition(300, 386);
	//clear frame
	this->window->clear();
	//draw game obj
	this->renderRoom();
	this->player.render(this->window);
	//display game obj
	this->window->display();
}
const bool game::windowIsOpen() const {

	return this->window->isOpen();
}