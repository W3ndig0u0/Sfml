#include <SFML/Graphics.hpp>

int main()
{
  // !Skapar windows skärmen
  sf::RenderWindow window(sf::VideoMode(1280, 720), "Game");

  // !Game loop
  while (window.isOpen())
  {
    sf::Event event;

    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
      }
    }
  }

  return 0;
}