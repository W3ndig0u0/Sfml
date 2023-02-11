#include <SFML/Graphics.hpp>
#include <iostream>
#include "Scene.h"

class Render
{
public:
  void renderScene(Scene s)
  {
    while (window.isOpen())
    {
      s.update();
      s.whatToDraw();
      window.display();
    }
  };