#include "game.h"
#include "menu.h"
int main()
{
    //font
    sf::Font comic_sans;
    comic_sans.loadFromFile("C:\\comicsansms.ttf");
    //init game
    game cookGame;
    //game loop
    while(cookGame.windowIsOpen()){
    //update
    cookGame.update();
    //render
    cookGame.renderer();
    }
    return 0;
}