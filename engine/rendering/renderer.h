#pragma once

#include "SDL2/SDL.h"
#include "engine/common/vec2.h"

class Renderer {
public:
  void render_circle(Vec2 position, float radius);
  void clear();
  void present();
  Renderer(int size);
  ~Renderer();

private:
  SDL_Window *window;
  SDL_Renderer *renderer;
  int size;
};