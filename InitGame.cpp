#include <SFML/Graphics.hpp>
#include <iostream>
#include "InitGame.h"
#include "CurrentScene.h"

class InitGame
{
public:
  CurrentScene currentScene;
  InitGame(int screenWidth, int screenHeight);
}

InitGame::InitGame(int screenWidth, int screenHeight)
{
  // !Skapar windows skärmen
  sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight), "Game");
  window.setFramerateLimit(144);

  currentScene.playScene();
}