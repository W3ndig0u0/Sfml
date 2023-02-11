#include "Scene.h"
#include "InitGame.h"

#ifndef CURRENTSCENE_H
#define CURRENTSCENE_H

class CurrentScene
{

public:
  void playScene();
  void getScene(int n);
  void addScene(Scene scene);
};

#endif