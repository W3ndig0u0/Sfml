
#include <iostream>
#include "Scene.h"
#include "InitGame.h"

class CurrentScene
{
public:
  Scene scenes[10];
  //! -1 är för att den inte ska köra indexen 1, som inte finns just nu
  int currentScene = -1;

  CurrentScene()
  {
    // !intro.loadingScene är den första scenen som ska köras.
    AddScene(scenes[currentScene]);
  }

  //! VIlken Scene som ska rendras, den säger till Draw vad som ska rendras
  void playScene()
  {
    InitGame.draw.RenderScene(scenes[currentScene]);
  }

  Scene getScene(int n)
  {
    return scenes[currentScene - n];
  }

  //! För att lägga till en scene
  void addScene(Scene scene)
  {
    scenes[currentScene] = scene;
    currentScene++;
  }
}