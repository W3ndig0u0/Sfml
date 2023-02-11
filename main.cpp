#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#include "InitGame.h"

int main()
{

  int screenWidth = 1280;
  int screenHeight = 720;

  int playerWidth = 50;
  int playerHeight = 50;

  float xVelocity = 3;
  float yVelocity = 3;

  // !Skapar windows skärmen
  InitGame InitGame(screenWidth, screenHeight);

  // sf::RectangleShape player;

  // sf::Vector2f playerPosition(screenWidth / 2, screenHeight / 2);

  // // !Definerar player egenskaper
  // player.setPosition(playerPosition);
  // player.setSize(sf::Vector2f(playerWidth, playerHeight));

  // // ?Game loop
  // while (window.isOpen())
  // {
  //   sf::Event event;

  //   while (window.pollEvent(event))
  //   {
  //     if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
  //       window.close();
  //   }

  //   // ?Fysik
  //   if (playerPosition.x > screenWidth - 50 || playerPosition.x < 0)
  //     xVelocity *= -1;

  //   if (playerPosition.y > screenHeight - 50 || playerPosition.y < 0)
  //     yVelocity *= -1;

  //   playerPosition.x += xVelocity;
  //   playerPosition.y += yVelocity;
  //   player.setPosition(playerPosition);

  //   // ?Render
  //   window.clear(sf::Color::Black);

  //   window.draw(player);

  //   window.display();
  // }

  return 0;
}