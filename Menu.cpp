#include <iostream>
#include <SFML/Graphics.hpp>
#include "Scene.h"

class MenuScene : Scene
{

public
  override void Update()
  {
    // !Om EscapeMode är på och man trycker på esc knappen aktiveras Escape men annars stängs escape av (om den redan är på)
    // if (Raylib.IsKeyPressed(KeyboardKey.KEY_ESCAPE) && !menuEnabled)
    // {
    //   menuEnabled = true;
    // }
    // else if (Raylib.IsKeyPressed(KeyboardKey.KEY_ESCAPE) && menuEnabled)
    // {
    //   menuEnabled = false;
    // }
  }

  override void WhatToDraw()
  {

    Raylib.ClearBackground(Color.LIGHTGRAY);
    Raylib.DrawText("Menu", 700, 250, 50, Color.WHITE);
    MenuButton GameButton = new MenuButton(530, 350, 250, 75, Color.BLACK, "Game", gamePlay);
    MenuButton MapButton = new MenuButton(830, 350, 250, 75, Color.BLACK, "Mapping", mapping);
    MenuButton HelpButton = new MenuButton(630, 550, 250, 75, Color.BLACK, "Help", help);

    if (menuEnabled)
    {
      EscapeMode();
    }
  }
}